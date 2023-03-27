#include "main.h"

/**
 * _atoi - this function converts a string to an integer
 * number in the string can be preceded by an infinite number of characters
 * @str: string
 * Return: converted integer
 */

int _atoi(char *str)
{
	int a, b, c, len, d, digit;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	d = 0;
	digit = 0;

	while (str[len] != '\0')
		len++;

	while (a < len && d == 0)
	{
		if (str[a] == '-')
			++b;

		if (str[a] >= '0' && str[a] <= '9')
		{
			digit = str[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (str[a + 1] < '0' || str[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (c);
}
