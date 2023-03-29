#include "main.h"

/**
 * _strncpy - this function copies a string
 * should work exactly like strncpy
 * @dest: string input
 * @src: string input
 * @n: input
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
