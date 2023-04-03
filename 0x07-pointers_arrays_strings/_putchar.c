#include "main.h"
#include <stdio.h>

/**
 * _putchar - this function writes the character to stdout
 * @c: character to be written
 * Return: 1 (success)
 * On error, output -1 and set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
