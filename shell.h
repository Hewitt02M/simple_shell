#ifndef _SHELL_H_
#define _SHELL_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <stdio.h>

void jhew_print(const char *file);
void display_prompt(void);
void xcut_funct(const char *command);
void read_command(char *command, size_t size);
char *_strcat(char *dest, const char *src);
int (*imp_builtin(char *command))(char **args, char **front);
int jb_exit(char **args, char **front);
int jb_cd(char **args, char **front);
int jb_setenv(char **args, char **front);
int jb_unsetenv(char **args, char **front);

#endif
