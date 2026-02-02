#include "minishell.h"
#include "parser.h"
#include "executor.h"

void shell_loop() {
    char line[MAX_LINE];
    Command cmd;

    while (1) {
        printf("MiniShell> ");
        if (!fgets(line, MAX_LINE, stdin)) break;
        line[strcspn(line, "\n")] = 0;  // remove newline

        if (parse_line(line, &cmd) == 0) {
            execute_command(&cmd);
        }
    }
}
