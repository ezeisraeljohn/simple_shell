#include "shell.h"

/**
 * read_cmd - Read a command from standard input
 * @cmd: Pointer to a char pointer that will store the command
 * @input_size: Pointer to a size_t variable that will store the input size
 *
 * Description: This function reads a command from standard input using the
 * getline function. It allocates memory for the command and stores it in the
 * memory location pointed to by cmd. The size of the input is stored in the
 * memory location pointed to by input_size. If an error occurs during
 * getline, the function prints an error message and exits the program.
 *
 * Return: 0 on successful completion
 */

ssize_t read_cmd(char **cmd, size_t *input_size)
{
	ssize_t nread;

	nread = getline(cmd, input_size, stdin);

	if (nread == -1)
	{
		perror("getline");
		exit(EXIT_FAILURE);
	}
	return (0);
}
