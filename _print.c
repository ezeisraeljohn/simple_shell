#include "shell.h"

/**
 * _print - Print a string to standard output
 * @display: The string to be printed
 *
 * Description: This function writes the specified string to standard output
 * using the write system call. It takes a constant string as input and uses
 * the length of the string to determine the number of bytes to write. The
 * string is printed to the standard output file descriptor (STDOUT_FILENO).
 */

void _print(const char *display)
{
	write(STDOUT_FILENO, display, strlen(display));
}
