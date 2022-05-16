#include "main.h"

/**
 * print_env - prints the current environment.
 * @tokens: double pointer to tokens.
 * @string: input.
 * @error: error.
 * Return: 1 if successful.
 */

int print_env(char **tokens __attribute__((unused)),
			  char *string __attribute__((unused)), int *error)
{
	char **env = environ;
	unsigned int i, size = 0;

	i = 0;
	while (env[i] != NULL)
	{
		size = _strlen(env[i]);
		write(STDOUT_FILENO, env[i], size);
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}

	*error = 0;
	return (1);
}
