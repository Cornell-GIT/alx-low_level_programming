#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - this function returns a pointer to a newly allocated memory space
 * which contains a copy of the string given as a parameter
 *
 * @str: character
 * Return: a pointer to the duplicated string, or NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *x;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	x = malloc(sizeof(char) * (i + 1));

	if (x == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		x[r] = str[r];

	return (x);
}
