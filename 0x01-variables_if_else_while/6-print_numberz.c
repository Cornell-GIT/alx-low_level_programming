#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Numberz */
/**
 * main - This program prints numbers of base 10 using putchar
 *
 * Return: Always 0 (Exit)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
