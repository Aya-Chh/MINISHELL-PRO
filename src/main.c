#include "minishell.h"
#include "signals.h"

int main() {
    printf("MiniShell-Pro v0.1\nType 'exit' to quit\n");
    init_signals();
    shell_loop();
    return 0;
}
