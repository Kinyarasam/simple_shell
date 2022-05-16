#include <stdio.h>
#include <string.h>

/**
 * main - splits a string and returns an array of each word of the string
 *
 * Return: Always 0.
 */
int main(void)
{
	int i =0, j=0;
	char str[80] = "hello world";
	char *res;
	char *words[20];

	words[i++] = strtok(str, " ");
	while ((res = strtok(NULL, " ")))
	{
		words[i] = res;
		i++;
	}

	while (j < i)
	{
		printf("%s\n", words[j]);
		j++;
	}
	return (0);
}
