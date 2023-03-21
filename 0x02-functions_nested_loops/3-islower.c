#include "main.h"
/**
 * _islower - This program checks for lowercase characters
 * @c: The character to be checked
 * Return: 1 (success), if not 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
