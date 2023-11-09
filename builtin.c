#include "shell.h"
#include <string.h>
#include <stdio.h> 
#include <stdlib.h>

int (*get_builtin(char *command))(char **args, char **front);

/**
 * my_exit - Implement the exit built-in command.
 * @args: Array of command arguments.
 * @front: Array of the command arguments with the command itself.
 * Return: Always returns -1 to signal the shell to exit.
 */
int my_exit(char **args, char **front) {
    (void)front;
    if (args[1] != NULL) {
        int status = atoi(args[1]);
        return status;
    }
    return -1;
}

/**
 * my_cd - Implement the cd built-in command.
 * @args: Array of command arguments.
 * @front: Array of the command arguments with the command itself.
 * Return: Always returns 0.
 */
int my_cd(char **args, char **front) {
    (void)front;
    if (args[1] != NULL) {
        if (chdir(args[1]) != 0) {
            perror("cd");
        }
    } else {
        fprintf(stderr, "cd: missing argument\n");
    }
    return 0;
}

/**
 * my_setenv - Implement the setenv built-in command.
 * @args: Array of command arguments.
 * @front: Array of the command arguments with the command itself.
 * Return: Always returns 0.
 */
int my_setenv(char **args, char **front) {
    (void)front;
    if (args[1] != NULL && args[2] != NULL) {
        if (setenv(args[1], args[2], 1) != 0) {
            perror("setenv");
        }
    } else {
        fprintf(stderr, "setenv: missing arguments\n");
    }
    return 0;
}

/**
 * my_unsetenv - Implement the unsetenv built-in command.
 * @args: Array of command arguments.
 * @front: Array of the command arguments with the command itself.
 * Return: Always returns 0.
 */
int my_unsetenv(char **args, char **front) {
    (void)front;
    if (args[1] != NULL) {
        if (unsetenv(args[1]) != 0) {
            perror("unsetenv");
        }
    } else {
        fprintf(stderr, "unsetenv: missing argument\n");
    }
    return 0;
}

/**
 * get_builtin - Matches a command with a corresponding
 *               builtin function.
 * @command: The command to match.
 * Return: A function pointer to the corresponding builtin.
 */
int (*get_builtin(char *command))(char **args, char **front) {
    if (strcmp(command, "exit") == 0) {
        return my_exit;
    }
    if (strcmp(command, "cd") == 0) {
        return my_cd;
    }
    if (strcmp(command, "setenv") == 0) {
        return my_setenv;
    }
    if (strcmp(command, "unsetenv") == 0) {
        return my_unsetenv;
    }
   
    return NULL;
}
