#include "main.h"
#include <unistd.h>

/**
 * _putchar - this function writes the character c to standard output
 * @c: input character
 *
 * Return: On success 1, else output -1 and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
