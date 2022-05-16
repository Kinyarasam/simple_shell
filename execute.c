#include "main.h"

/**
 * check_execution - checks how to execute the command.
 * @tokens: array that contains tokens
 * @string: string captured in the stdin.
 * @error: error.
 * Return: Nothing.
 */

void check_execution(char **tokens, char *string, int *error)
{
	char *ruta, **tmp;
	struct stat st;

	if (tokens[0][0] == '/' || tokens[0][0] == '.')
	{
		if (stat(tokens[0], &st) == 0)
			execute(tokens, string, error);
		else
		{
			*error = 2;
			print_error(tokens, error);
			free(tokens);
		}
	}
	else
	{
		tmp = malloc(2 * sizeof(char *));
		tmp[0] = tokens[0];
		tmp[1] = NULL;
		ruta = find_path(tokens[0]);
		tokens[0] = ruta;
		if (tokens[0] == NULL)
		{
			*error = 1;
			print_error(tmp, error);
			free(tokens);
		}
		else
			execute(tokens, string, error);
		free(ruta);
		free(tmp);
	}
}

/**
 * execute - executes the command.
 * @tokens: array that contains tokens
 * @string: string captured in the stdin.
 * @error: error.
 * Return: Nothing.
 */

void execute(char **tokens, char *string, int *error)
{
	pid_t fork_id, w_pid; /*w_pid, pid, ppid*/

	/*printf("in execute tokens [0] = %s\n", tokens[0]);*/
	fork_id = fork();

	if (fork_id == -1)
	{
		*error = 2;
		print_error(tokens, error);
		free(tokens);
	}

	if (fork_id == 0)
	{
		if (execv(tokens[0], tokens) == -1)
		{
			*error = 127;
			print_error(tokens, error);
			free(tokens);
			free(string);
		}
		free(tokens);
		free(string);
	}

	if (fork_id != 0)
	{
		w_pid = wait(NULL);
		if (w_pid == -1)
			perror("./SHELLY4");
		free(tokens);
	}
}
