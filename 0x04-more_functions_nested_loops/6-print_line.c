#include "main.h"

/**
 * print_line - draw a straight line
 * @n: number of line to draw
 * Return: new line
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0 ; i <= n ; i++)
			_putchar('_');
	}
	_putchar('\n');
}
