#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Result: length
 *
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
