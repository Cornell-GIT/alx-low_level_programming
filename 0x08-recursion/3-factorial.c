#include "main.h"
#include <stdio.h>

/**
 * factorial - this function returns the factorial of a given number
 * @n: given number
 * If n is lower than 0,
 * the function should return -1 to indicate an error
 * Factorial of 0 is 1
 * Return: factorial of the given number n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
