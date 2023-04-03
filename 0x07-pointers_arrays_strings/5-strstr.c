#include "main.h"
#include <stdio.h>

/**
 * _strstr - this function locates a substring
 * @haystack: string
 * @needle: substring
 * finds the first occurrence of the substring needle in the string haystack
 * The terminating null bytes (\0) are not compared
 * Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}
