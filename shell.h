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
int main(void);
int main(int argc, char *argv);
void display_prompt(void);
void xcut_funct(const char *command);

#endif
