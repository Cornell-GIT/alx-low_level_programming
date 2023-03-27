#include "main.h"

/**
 * _strlen - this function returns the length of a string
 * @str: string
 * Return: len (length)
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}
