#ifndef SIGNALS_H
#define SIGNALS_H
#include <signal.h>

void handle_sigint(int sig);
void init_signals();

#endif
