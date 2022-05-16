#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints user input
 *
 * Return: Always 0.
 */
int main(void)
{
	char *buf;
	size_t size = 1024;

	buf = malloc(sizeof(char) * size);
	printf("$ ");
	getline(&buf, &size, stdin);
	printf("%s", buf);
	free(buf);
	return (0);
}
