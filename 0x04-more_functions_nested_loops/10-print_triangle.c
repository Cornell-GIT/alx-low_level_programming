#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: the size of the triangle
 * You can only use _putchar function to print
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
