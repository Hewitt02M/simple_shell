#include "shell.h"

/**
 * xcut_funct - function that executes commands
 * @command: The command to be executed
 *
 * Return: Nothing
 */
void xcut_funct(const char *command)
{
    pid_t child_pid = fork();

    if (child_pid == -1)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    else if (child_pid == 0)
    {
        if (execlp(command, command, (char *)NULL) == -1)
        {
            perror("execlp");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        wait(NULL);
    }
}
