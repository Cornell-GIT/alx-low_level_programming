#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Numbers */
/**
 * main - This program prints single numbers of base 10 starting from 0
 *
 * Return: Always 0 (Exit)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
