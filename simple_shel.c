#include "shell.h"

/**
 * main - Entry point for the simple shell program.
 *
 * Return: Always 0.
*/

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
