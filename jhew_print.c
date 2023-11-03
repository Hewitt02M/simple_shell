#include <unistd.h>
#include <string.h>

/**
 * jhew_print - Print a string to the standard output.
 * @file: The string to be printed.
 */

void jhew_print(const char *file)
{
	write(STDOUT_FILENO, file, strlen(file));
}
