#include "shell.h"

int (*imp_builtin(char *command))(char **args, char **front);
int jb_exit(char **args, char **front);
int jb_cd(char **args, char **front);
int jb_setenv(char **args, char **front);
int jb_unsetenv(char **args, char **front);

/**
 * imp_builtin - Matches a command with a corresponding
 *               jb builtin function.
 * @command:command to match.
 *
 * Return: A fun pntr to the corresponding builtin.
 */

int (*imp_builtin(char *command))(char **args, char **front)
{
if (strcmp(command,"exit") == 0) {
return jb_exit;
}
if (strcmp(command,"cd") == 0) {
return jb_cd;
}
return NULL;
}
