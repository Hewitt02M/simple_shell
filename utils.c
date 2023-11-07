#include "shell.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string to be appended to dest.
 * Return: Pointer to the resulting string (dest).
 */
char *_strcat(char *dest, const char *src)
{
    char *result = dest;

    while (*dest)
        dest++;
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return result;
}
