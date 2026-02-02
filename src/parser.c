#include "parser.h"

int parse_line(char *line, Command *cmd) {
    int i = 0;
    char *token = strtok(line, " ");
    if (!token) return -1;

    cmd->name = token;
    cmd->argc = 0;

    while (token && i < MAX_ARGS-1) {
        cmd->args[i++] = token;
        token = strtok(NULL, " ");
    }
    cmd->args[i] = NULL;
    cmd->argc = i;
    return 0;
}
