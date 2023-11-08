#include "shell.h"
#include <stdio.h>

/**
 * jb_exit - implement exit builtin command
 * @args: array of command arg
 * @front: array of command arg with the command
 * 
 * Return: always return  -1 to signal the shell to exit
*/

int jb_exit(char **args, char **front)
{
	(void)front;
	if (args[1] != NULL) {
		int status =
			atoi(args[1]);
		return status;
	}
	return -1;
}
