#include "shell.h"
#include "prompt.h"
#include "user_input.h"
#include "shell.h"
#include "utils.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void execute_command(char *command);

int main(void)
{
    char command[113];

    while (1) {
        display_prompt();
        read_command(command, sizeof(command));
        xcut_funct(command);
    }

    return (0);
}

void execute_command(char *command) {
    char *args[113]; 

    int i = 0;

    args[i] = strtok(command, " \t\n");
    while (args[i] != NULL && i < 99) {
        i++;
        args[i] = strtok(NULL, " \t\n");
    }

    args[i] = NULL;

    if (args[0] != NULL) {

        pid_t child_pid = fork();

        if (child_pid == -1) {
            perror("Fork failed");
        } else if (child_pid == 0) {

            if (execve(args[0], args, NULL) == -1) {
                perror("Execve failed");
                exit(EXIT_FAILURE);
            }
        } else {

            int status;
            waitpid(child_pid, &status, 0);
        }
    }
}
