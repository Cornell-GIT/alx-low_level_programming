#include <stdlib.h>
#include <time.h>
/* Positive anything is better than negative nothing */
/**
 * main - This program will assign a random number to the variable
 *
 * Return: Always 0 (This indicates the end of the program)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
