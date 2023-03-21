#include "main.h"
/**
 * _isalpha - This program checks for alphabetic characters
 * @c: alphabetic character to be checked
 * Return: 1 if c is an alphabet, otherwise output 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
