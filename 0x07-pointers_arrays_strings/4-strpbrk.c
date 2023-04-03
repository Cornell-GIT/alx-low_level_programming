#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - this function searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * locates the first occurrence in s of any of the bytes in accept
 * Returns a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
		int f;

		while (*s)
		{
			for (f = 0; accept[f]; f++)
			{
			if (*s == accept[f])
			return (s);
			}
		s++;
		}

	return ('\0');
}
