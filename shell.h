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
<<<<<<< HEAD
void read_command(char *command, size_t size);
=======
execute_command(command);
read_command(command, sizeof(command));
>>>>>>> bdb968e3aa4e6dddab5ddaa168ad02978b1125ee

#endif
