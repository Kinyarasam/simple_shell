#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: string dest.
 * @src: string source.
 * Return: pointer to concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int i = _strlen(dest);
	int j = 0;

	while (src[j])
		dest[i++] = src[j++];
	dest[i] = src[j];
	return (dest);
}
