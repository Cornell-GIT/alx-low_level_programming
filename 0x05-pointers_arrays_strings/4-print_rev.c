#include "main.h"

/**
 * print_rev - this function prints string in reverse,
 * followed by a new line
 * @str: string
 * Return: 0
 */

void print_rev(char *str)
{
	int len = 0;
	int l;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str--;
	for (l = len; l > 0; l--)
	{
		_putchar(*str);
		str--;
	}

	_putchar('\n');
}
