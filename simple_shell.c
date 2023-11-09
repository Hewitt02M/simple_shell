#include "shell.h"
#include "prompt.h"
#include "user_input.h"
#include "utils.h"
#include "builtin.c"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * execute_command - Execute a command.
 * @command: The command to execute.
 */
void execute_command(char *command) {
    char *args[100];
    int i = 0;

    args[i] = strtok(command, " \t\n");
    while (args[i] != NULL && i < 99) {
        i++;
        args[i] = strtok(NULL, " \t\n");
    }
    args[i] = NULL;

    if (args[0] != NULL) {
        int (*builtin)(char **, char **);
        builtin = imp_builtin(args[0]);

        if (builtin) {
            builtin(args, NULL);
        } else {
            char *command_path = get_path_dir(args[0]);
            if (command_path == NULL) {
                fprintf(stderr, "Command not found: %s\n", args[0]);
            } else {
                pid_t child_pid = fork();

                if (child_pid == -1) {
                    perror("Fork failed");
                    exit(EXIT_FAILURE);
                } else if (child_pid == 0) {
                    if (execve(command_path, args, NULL) == -1) {
                        perror("Execve failed");
                        exit(EXIT_FAILURE);
                    }
                } else {
                    int status;
                    waitpid(child_pid, &status, 0);
                }
            }
        }
    }
}

/**
 * main - Entry point of the shell.
 * Return: Always returns 0.
 */
int main(void) {
    char command[113];

    while (1) {
        display_prompt();
        read_command(command, sizeof(command));
        execute_command(command);
    }

    return 0;
}
