#include "shell.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 * Return: A pointer to the duplicated string, or NULL if memory allocation fails.
 */
char *_strdup(const char *str)
{
    char *dup;
    size_t len = 0;

    if (str == NULL)
        return (NULL);

    while (str[len])
        len++;

    dup = malloc(sizeof(char) * (len + 1));

    if (dup == NULL)
        return (NULL);

    for (len = 0; str[len]; len++)
        dup[len] = str[len];
    dup[len] = '\0';
    return (dup);
}

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * Return: A pointer to the concatenated string.
 */
char *_strcat(char *dest, const char *src)
{
    size_t i, j;

    for (i = 0; dest[i]; i++)
        ;

    for (j = 0; src[j]; j++)
        dest[i + j] = src[j];

    dest[i + j] = '\0';
    return dest;
}

/**
 * get_path_dir - Gets the full path of a command.
 * @command: The name of the command.
 * Return: A pointer to the full path of the command, or NULL on failure.
 */
char *get_path_dir(const char *command)
{
    char *path_dir = _strdup(command);
    if (!path_dir)
    {
        perror("strdup failed");
        return (NULL);
    }
    return (path_dir);
}

/**
 * _strlen - Calculate the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
size_t _strlen(const char *s)
{
    size_t len = 0;

    while (s[len] != '\0')
        len++;

    return len;
}

/**
 * jhew_print - Write a string to the standard output.
 * @str: The string to be written.
 */
void jhew_print(const char *str)
{
    write(STDOUT_FILENO, str, _strlen(str));
}
