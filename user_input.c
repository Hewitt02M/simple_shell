#include "shell.h"

/*
 * read_command - read a line of input fromthe user.
 *
 * return - success with \n and user's input as a string or NULL on failure
*/
void read_command(char *option, size_t size);
{
if (fgets(option, size, stdin) == NULL)
{
if (foef(stdin))
{
jhew_print("\n");
exit(EXIT_SUCCESS);
}
else
{
jhew_print("Error while reading input.\n");
exit(EXIT_FAILURE);
}
}
command[strcspn(command, "\n")] = '\0';
}
