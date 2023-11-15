#include "shell.h"
/**
 * execute_command - Execute a shell command
 * @command: The command to be executed
 *
 * Description: This function takes a shell command as input, creates a new
 * process using fork(), and executes the command in the child process using
 * execve(). The function checks for errors during fork(), access(), and
 * execve(), and prints corresponding error messages if any issues occur.
 * The parent process waits for the child process to complete using waitpid().
 * The memory allocated for the duplicated command string is freed before
 * returning.
 *
 * Return: None
 */

void execute_command(const char *command)
{
	char *args[2];
	int status;
	pid_t new_pid;

	args[0] = strdup(command);
	args[1] = NULL;

	new_pid = fork();

	if (new_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (new_pid == 0)
	{
		if (access(args[0], X_OK) == -1)
		{
			perror("access");
			exit(EXIT_FAILURE);
		}
		execve(args[0], args, NULL);
		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		waitpid(new_pid, &status, 0);
	}

	free(args[0]);
}
