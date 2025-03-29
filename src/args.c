#include "args.h"
#include <stdlib.h>
#include <string.h>

struct message_arguments *get_message_arguments(char *message_content)
{
    struct message_arguments *result = malloc(sizeof(struct message_arguments));
    result->arguments = NULL;
    result->amount = 0;

    char *token = strtok(message_content, " ");
    int token_length;

    while (token != NULL)
    {
        ++(result->amount);
        token_length = strlen(token);
        result->arguments = realloc(result->arguments, sizeof(char*) * result->amount);
        *(result->arguments + (result->amount - 1)) = malloc(sizeof(char) * token_length + 1);
        strncpy(*(result->arguments + (result->amount - 1)), token, token_length + 1);
        token = strtok(NULL, " ");
    }

    free(token);

    return result;
}

void free_message_arguments_structure(struct message_arguments *arg)
{
    for (size_t i = 0; i < arg->amount; i++) free(arg->arguments[i]);
    free(arg);
}