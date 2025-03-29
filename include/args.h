#ifndef ARGS_H
#define ARGS_H

#include <stdio.h>

struct message_arguments {
    char **arguments;
    size_t amount;
};

struct message_arguments *get_message_arguments(char *);
void free_message_arguments_structure(struct message_arguments *);

#endif