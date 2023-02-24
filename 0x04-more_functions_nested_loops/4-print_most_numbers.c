#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * Description: the numbers excludes 2 and 4
 * Result: print the numbers 0 to 9 excluding 2 and 4
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0 ; x <= 9 ; x++)
	{
		if (!(x == 2 || x == 4))
			_putchar(x + '0');
		_putchar ('\n');
	}
}
