#include "shell.h"
#include <string.h>
#include <stdio.h>

/**
 * remove_comments - Removes comments from a command.
 * @command: The command to process.
 */
void remove_comments(char *command) {
    char *comment_start = strstr(command, "#");
    if (comment_start != NULL) {
        /* Remove the comment part */
        *comment_start = '\0';
    }
}
