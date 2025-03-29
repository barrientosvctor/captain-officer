#include <discord.h>
#include <log.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "args.h"

#define DEFAULT_PREFIX "!"

void
on_ready(struct discord* client, const struct discord_ready* event)
{
    log_info("Copycat-Bot succesfully connected to Discord as %s#%s!",
        event->user->username, event->user->discriminator);
}

void
on_message_create(struct discord* client, const struct discord_message* event)
{
    if (event->content[0] != '!') return;

    struct message_arguments *message_args = get_message_arguments(event->content);
    char *command_name = strtok(message_args->arguments[0], DEFAULT_PREFIX);

    if (command_name == NULL) command_name = DEFAULT_PREFIX;

    if (strcmp(command_name, "ping") == 0)
    {
        struct discord_create_message params = {
            .content="Pong!"
        };
        discord_create_message(client, event->channel_id, &params, NULL);
    } else
    {
        struct discord_create_message msg = {
            .content="This name doesn't belong to none available command."
        };
        discord_create_message(client, event->channel_id, &msg, NULL);
    }
    
    free_message_arguments_structure(message_args);
}

int main(void) {
    ccord_global_init();

    struct discord* client = discord_config_init("config.json");
    assert(NULL != client && "Couldn't initialize client");

    discord_add_intents(client, DISCORD_GATEWAY_MESSAGE_CONTENT);

    discord_set_on_ready(client, &on_ready);
    discord_set_on_message_create(client, &on_message_create);

    fgetc(stdin); // wait for input

    discord_run(client);

    discord_cleanup(client);
    ccord_global_cleanup();
}
