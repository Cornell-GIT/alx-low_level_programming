#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - this function determines if an integer is a prime number
 * this function returns 1, if the integer is a prime number, else return 0
 * @n: input integer
 * Return: 1 if integer n is a prime number, otherwise output 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - this function recurses to determine if the number is prime
 * @n: given integer
 * @i: iterator
 * Return: 1 if the integer is prime, else output 0
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
