#include "main.h"
#include <stdio.h>

/**
 * _atoi - this program converts a string to an integer
 * @s: string
 *
 * Return: i (converted integer)
 */

int _atoi(char *s)
{
	int x, y, i, l, z, d;

	x = 0;
	y = 0;
	i = 0;
	l = 0;
	z = 0;
	d = 0;

	while (s[l] != '\0')
		l++;

	while (x < l && z == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			d = s[x] - '0';
			if (y % 2)
				d = -d;
			i = i * 10 + d;
			z = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			z = 0;
		}
		x++;
	}

	if (z == 0)
		return (0);

	return (i);
}

/**
 * main - this program multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int multiple, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	multiple = n1 * n2;

	printf("%d\n", multiple);

	return (0);
}
