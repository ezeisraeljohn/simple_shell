#include "shell.h"

/**
 * ffree - Free memory allocated for an array of strings
 * @arr_strings: The array of strings to be freed
 *
 * Description: This function takes an array of strings as input and frees the
 * memory allocated for each string in the array. It then frees the memory
 * allocated for the array itself. The array is assumed to be terminated by a
 * NULL pointer.
 *
 * Return: None
 */

void ffree(char **arr_strings)
{
	size_t i;

	for (i = 0; arr_strings[i] != NULL; i++)
	{
		free(arr_strings[i]);
	}

	free(arr_strings);
}
