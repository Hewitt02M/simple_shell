#include "shell.h"

/**
 * xcut_funct - Function that executes commands.
 * @command: The command to execute.
 *
 * Return: No return value.
 */
void xcut_funct(const char *command)
{
<<<<<<< HEAD
pid_t child_p = fork()
}
if (child_pid == -1)
{
perror("fork")
exit(EXIT_FAILURE)
}
else if (child_pid i == 0)
{
execlp(command, command, (char *)NULL);
perror("execlp");
exit(EXIT_FAILURE)
}
else
{
wait(NULL);
=======
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
>>>>>>> 5d2fe30546e9b74315c4bdc86ace79c1714c6399
}
