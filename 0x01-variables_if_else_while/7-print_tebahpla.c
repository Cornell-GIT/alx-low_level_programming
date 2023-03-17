#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Smile in the mirror */
/**
 * main - This program prints the lowercase alphabet in reverse
 * Return: Always 0 (Exit)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
