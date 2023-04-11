#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - this function returns a pointer to a newly allocated memory space
 * which contains a copy of the string given as a parameter
 *
 * @s: character
 * Return: a pointer to the duplicated string, or NULL if str = NULL
 */

char *_strdup(char *s)
{
	char *a;
	int b, c = 0;

	if (s == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
		b++;

	a = malloc(sizeof(char) * (b + 1));

	if (a == NULL)
		return (NULL);

	for (c = 0; s[c]; c++)
		a[c] = s[c];

	return (a);
}
