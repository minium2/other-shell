#ifndef PARSER_H
#define PARSER_H
#include <string.h>

#include "common.h"
#include "stdio.h"

typedef struct command
{
    char* tokens[LIMIT];
    size_t numtokens;
    char* file_in;
    char* file_out;
    unsigned char background;
    struct command* next;
}command;

typedef struct command_list
{
    command* cmd;
    size_t sizelist;
}command_list;

void initial_parser(command_list* head);

char* get_next_tokens(char* line, command_list* head);

void command_clear(command* cmd);

void reset_parser(command_list* head);

#endif