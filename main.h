#ifndef MAIN_H
#define MAIN_H

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

size_t expand_buffer(char **buffer, size_t *bufsize);
ssize_t _getline(char **lineptr, size_t *n, int fd);
void *_realloc(void *ptr, size_t old_size, size_t new_size);
void *_memcpy(void *dest, const void *src, size_t n);
void execmd(char **argv);

#endif
