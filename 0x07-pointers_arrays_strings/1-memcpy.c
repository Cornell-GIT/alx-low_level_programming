#include "main.h"
#include <stdio.h>

/**
 *_memcpy - this function copies memory area
 *@dest: memory area where bytes are copied
 *@src: memory area where is stored
 *@n: number of bytes
 *copies n bytes from memory area src to memory area dest
 *Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
