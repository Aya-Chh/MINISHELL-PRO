#ifndef MINISHELL_H
#define MINISHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

#define MAX_LINE 1024
#define MAX_ARGS 64

typedef struct {
    char *name;
    char *args[MAX_ARGS];
    int argc;
} Command;

void shell_loop();

#endif
