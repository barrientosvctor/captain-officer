#include <discord.h>
#include <log.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void
on_ready(struct discord* client, const struct discord_ready* event)
{
    log_info("Copycat-Bot succesfully connected to Discord as %s#%s!",
        event->user->username, event->user->discriminator);
}

void
on_message_create(struct discord* client, const struct discord_message* event)
{
    
}

int main(void) {
    ccord_global_init();

    struct discord* client = discord_config_init("../config.json");
    assert(NULL != client && "Couldn't initialize client");

    discord_add_intents(client, DISCORD_GATEWAY_MESSAGE_CONTENT);

    discord_set_on_ready(client, &on_ready);
    discord_set_on_message_create(client, &on_message_create);

    fgetc(stdin); // wait for input

    discord_run(client);

    discord_cleanup(client);
    ccord_global_cleanup();
}
