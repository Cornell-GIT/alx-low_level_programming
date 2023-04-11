#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - this function creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: assigned character
 * Returns NULL if size = 0
 * Return: a pointer to array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}
