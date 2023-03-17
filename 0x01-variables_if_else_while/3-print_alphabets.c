#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* alphABET */
/**
 * main - This program prints the alphabet in lowercase and then uppercase
 *
 * Return: Always 0 (program exit)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
