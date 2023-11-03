#include "shell.h"

/**
 * main - Entry point for the simple shell program.
 * @argc: The number of arguments provided to the program.
 * @argv: An array of strings containing the arguments.
 * Return: 0 on success.
 */

int main(int argc, char *argv[]) 
{
	char *command[113];

	while (1) 
	{
		display_prompt();
		read_command (command, sizeof(command));
		execute_command (command)
	}

	return (0);
}
