#include "shell.h"
#include "user_input.h"
#include <stddef.h>
#include <string.h>

/**
 * read_command - Read a line of input from the user.
 *
 * @option: A buffer to store the user's input.
 * @size: The size of the buffer.
 *
 * Return: A string containing the user's input or NULL on failure.
 */
void read_command(char *option, size_t size)
{
    if (fgets(option, size, stdin) == NULL)
    {
        if (feof(stdin))
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
    option[strcspn(option, "\n")] = '\0';
}
