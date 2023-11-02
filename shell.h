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

void task_0_betty_proud(void);
char *read_command(void);
void execute_command(char *command);
int main(int argc, char argv[]);
void handle_command_with_arguments(char command);

#endif
