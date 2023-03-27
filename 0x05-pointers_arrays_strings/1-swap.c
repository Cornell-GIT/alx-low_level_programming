#include "main.h"

/**
 * swap_int - this function swaps the values of two integers
 * @x: first integer
 * @y: second integer
 */

void swap_int(int *x, int *y)
{
	int m;

	m = *x;
	*x = *y;
	*y = m;
}
