#include "executor.h"

void execute_command(Command *cmd) {
    if (strcmp(cmd->name, "exit") == 0) {
        exit(0);
    }

    pid_t pid = fork();
    if (pid == 0) {
        // Child process
        if (execvp(cmd->name, cmd->args) == -1) {
            perror("MiniShell-Pro");
        }
        exit(EXIT_FAILURE);
    } else if (pid > 0) {
        // Parent
        wait(NULL);
    } else {
        perror("fork failed");
    }
}
