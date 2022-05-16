#include "main.h"

/**
 * _strncmp - compares two strings until the n character.
 * @s1: string 1.
 * @s2: string 2.
 * @n: position.
 * Return: negative, positive or 0 if s1 is lower, bigger o match s2.
 */

int _strncmp(char *s1, char *s2, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	return (0);
}
