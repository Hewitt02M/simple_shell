#include "shell.h"
#include "utils.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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
