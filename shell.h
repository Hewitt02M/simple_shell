#ifndef SHELL_H
#define SHELL_H

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
void read_command(char *command, size_t size);
char *_strcat(char *dest, const char *src);
char *get_path_dir(const char *command);
void execute_command(char *command);

#endif
