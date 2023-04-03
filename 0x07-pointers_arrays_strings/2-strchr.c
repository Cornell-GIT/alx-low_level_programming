#include "main.h"
#include <stdio.h>

/**
 * _strchr - this function locates a character in a string
 * @s: string
 * @c: character
 * Returns a pointer to the first occurrence of the char c in the string s,
 * or NULL if the character is not found
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
