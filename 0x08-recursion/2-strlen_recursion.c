#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - this function returns the length of a string
 * @s: input string
 * Return: length of the string s
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
