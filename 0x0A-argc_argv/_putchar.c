#include <stdio.h>
#include "main.h"

/**
 * _putchar - this function writes the character c to stdout
 * @c: character
 *
 * Return: 1 (Success)
 * On error, -1 is returned and error is set appropriately
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
