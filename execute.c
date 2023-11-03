#include "shell.h"

/*
* xcut_funct - function that execute commands
*
* return ...
*/
void xcut_funct(const char *command);
{
pid_t child_p = fork();
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
}
