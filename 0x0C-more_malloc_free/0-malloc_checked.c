#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - this function allocates memory using malloc
 * @bytes: bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int bytes)
{
	void *ptr;

	ptr = malloc(bytes);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
