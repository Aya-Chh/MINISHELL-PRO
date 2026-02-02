#include "signals.h"
#include <stdio.h>

void handle_sigint(int sig) {
    (void)sig;
    printf("\nMiniShell> ");
    fflush(stdout);
}

void init_signals() {
    signal(SIGINT, handle_sigint);
}
