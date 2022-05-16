#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: negative, positive or 0 if s1 is lower, biger o match s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] || s2[i]; i++)
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	return (0);
}
