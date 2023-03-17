#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game */
/**
 * main - This program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Signifies the program exit)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	
	return (0);
}
