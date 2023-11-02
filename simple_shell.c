#include "shell.h"

/**
 * main - Entry point for the simple shell program.
 * @argc: The number of arguments provided to the program.
 * @argv: An array of strings containing the arguments.
 * Return: 0 on success.
 */

int main(int argc, char *argv[]) 
{
	char *command;

	while (1) 
	{
		command = read_command();
		execute_command(command);
		free(command);
	}

	return (0);
}
