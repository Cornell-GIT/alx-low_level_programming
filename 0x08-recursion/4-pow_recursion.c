#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - this function returns the value of x raised to power of y
 * If y is lower than 0, the function should return -1
 * @x: first integer (base number)
 * @y: second integer (power)
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
