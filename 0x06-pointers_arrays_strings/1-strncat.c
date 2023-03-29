#include "main.h"

/**
 * _strncat - this function concatenates two strings
 * will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: string input
 * @src: string input
 * @n: input
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
	dest[x] = src[y];
	x++;
	y++;
	}
	dest[x] = '\0';
	return (dest);
}
