#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @m: memory to be filled
 * @v: specific value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *m, char v, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		m[i] = v;
		n--;
	}
	return (m);
}
