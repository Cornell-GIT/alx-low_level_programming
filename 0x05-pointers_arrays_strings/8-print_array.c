#include "main.h"

/**
 * print_array - this function prints n elements of an array of integers,
 * followed by a new line.
 * @a: array
 * @n: number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * numbers should be displayed in the same order as stored in the array
 * Return: a and n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
