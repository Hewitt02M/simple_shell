#include "shell.h"
#include <string.h>
#include <stdio.h> 
#include <stdlib.h>

int jb_unsetenv(char **args, char **front);


/**
 * imp_builtin - Matches a command with a corresponding
 *               builtin function.
 * @command: The command to match.
 * Return: A function pointer to the corresponding builtin.
 */
int (*imp_builtin(char *command))(char **args, char **front) {
    if (strcmp(command, "exit") == 0) {
        return jb_exit;
    
    }
   
    return NULL;
}
