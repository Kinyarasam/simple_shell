#include <stdio.h>

int main(int ac, char **av);

/**
 * main - prints all the arguments without using `ac`
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	(void) ac;
	int count = 0;

	/*
	 while (av[count] != NULL)
	{
		printf("%s\n", av[count]);
		count++;
	}
	*/
	for (count = 0; av[count] != NULL; count++)
		printf("%s\n", av[count]);
	return (0);
}
