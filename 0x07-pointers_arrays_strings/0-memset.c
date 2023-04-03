#include "main.h"
#include <stdio.h>

/**
 * _memset - this function fills the first n bytes of the memory area,
 * pointed to by s with the constant byte b
 * @s: memory area
 * @b: constant byte
 * @n: bytes of the memory area
 *
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
