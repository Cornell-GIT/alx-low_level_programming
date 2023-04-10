#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function prints the minimum number of coins,
 * to make change for a certain amount
 * where cents is the amount of cents you need to give back
 * if number of arguments passed to the program is not exactly 1, print Error
 * followed by a new line, and return 1
 * use atoi to parse the parameter passed to your program
 * If the number passed as the argument is negative, print 0,
 * followed by a new line
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int num, x, result;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && num >= 0; x++)
	{
		while (num >= cents[x])
		{
			result++;
			num -= cents[x];
		}
	}

	printf("%d\n", result);
	return (0);
}
