#include "main.h"

/**
 * print_error - prints error message.
 * @tokens: array that contains tokens
 * @error: error.
 * Return: Nothing.
 */

void print_error(char **tokens, int *error)
{
	int print_error = *error;

	write(STDOUT_FILENO, "./hsh: ", 8);
	_print_int(print_error);
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, tokens[0], _strlen(tokens[0]));
	write(STDOUT_FILENO, ": not found\n", 12);
}
