#include "main.h"

/**
 * puts_half - this function prints half of a string
 * If the no of characters is odd, it should print the last n characters
 * where n = (length_of_the_string - 1) / 2
 * @str: string
 * Return: half of the string
 */

void puts_half(char *str)
{
	int a, b, len;

	len = 0;

	for (a = 0; str[a] != '\0'; a++)
		len++;

	b = (len / 2);

	if ((len % 2) == 1)
		b = ((len + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
