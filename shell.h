#ifndef SHELL_H
#define SHELL_H

#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include  <stddef.h>

void display_prompt(void);
void read_command(char *option, size_t size);
char *_strdup(const char *str);
char *_strcat(char *dest, const char *src);
int _strcmp(const char *s1, const char *s2);
void *_calloc(unsigned int nmemb, unsigned int size);
char *get_path_dir(const char *command);
int (*imp_builtin(char *command))(char **args, char **front);
int jb_exit(char **args, char **front);
int jb_cd(char **args, char **front);
int jb_setenv(char **args, char **front);
int jb_unsetenv(char **args, char **front);
void xcut_funct(const char *command);

void remove_comments(char *command);
void handle_variables(char *line);
void handle_logical_operators(char *line);
void handle_alias(char *line);
void execute_command(char *line);

void jhew_print(const char *str);
size_t _strlen(const char *s);

#endif /* SHELL_H */
