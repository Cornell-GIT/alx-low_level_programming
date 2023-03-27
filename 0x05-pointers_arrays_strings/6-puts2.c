#include "main.h"

/**
 * puts2 - this function prints every other character of a string,
 * starting with the first character,
 * followed by a new line
 * @str: string
 * Return: output
 */

void puts2(char *str)
{
	int len = 0;
	int a = 0;
	char *b = str;
	int l;

	while (*b != '\0')
	{
		b++;
		len++;
	}
	a = len - 1;
	for (l = 0 ; o <= a ; l++)
	{
		if (l % 2 == 0)
	{
		_putchar(str[l]);
	}
	}
	_putchar('\n');
}
