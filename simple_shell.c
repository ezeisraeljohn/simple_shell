#include "shell.h"

/**
 * main - Simple shell program for command execution
 *
 * Description: This function serves as the entry point for a simple shell
 * program. It prompts the user for commands, reads the input, and executes
 * each command using the execute_command function. The loop continues until
 * the user enters an EOF character (Ctrl+D). The shell provides a basic
 * interactive command-line interface.
 *
 * Return: 0 on successful completion
 */

int main(void)
{
	char command[MAX_COMMAND_LENGTH];

	while (1)
	{
		dis_prompt();

		fflush(stdout);

		if (fgets(command, sizeof(command), stdin) == NULL)
		{
			if (feof(stdin))
			{
				printf("\n");
				break;
			}
			else
			{
				perror("Input error");
				exit(EXIT_FAILURE);
			}
		}

		command[strcspn(command, "\n")] = '\0';
		execute_command(command);
	}
	return (0);
}

