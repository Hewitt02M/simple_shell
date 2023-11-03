#include "shell.h"

/**
 * xcut_funct - Function that executes commands.
 * @command: The command to execute.
 *
 * Return: No return value.
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
        execlp(command, command, (char *)NULL);
        perror("execlp");
        exit(EXIT_FAILURE);
    }
    else
    {
        wait(NULL);
    }
}
