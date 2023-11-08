#ifndef UTILS_H
#define UTILS_H
#include "shell.h"

char *_strcat(char *dest, const char *src);
char *_strdup(const char *str);
int _strcmp(const char *s1, const char *s2);
void *_calloc(unsigned int nmemb, unsigned int size);
char *get_path_dir(const char *command);

#endif
