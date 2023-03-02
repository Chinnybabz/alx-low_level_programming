#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: the string to be changed
 * Return: pointer to the changed string
 */

char *string_toupper(char *n)
{
	int index;

	index = 0;

	while (n[index] != '\0')
	{
		if (n[index] >= 'a' && n[index] <= 'z')
			n[index] -= 32;
		index++;
	}
	return (n);
}
