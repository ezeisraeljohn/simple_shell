#ifndef SHELL_H
#define SHELL_H
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <dirent.h>
#include <dirent.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
#define BUFF 1024
#define MAX_COMMAND_LENGTH 100

void execute_command(const char *command);
void dis_prompt(void);
char **split_to_string(const char *string, const char *delim);
ssize_t read_cmd(char **cmd, size_t *input_size);
void _print(const char *display);
void ffree(char **arr_strings);

#endif /* SHELL_H */
