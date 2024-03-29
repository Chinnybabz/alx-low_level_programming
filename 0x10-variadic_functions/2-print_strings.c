#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: the string to be printed between strings
 * @n: the number of strings passed
 * @...: a variable number of strings to be printed
 *
 * Result: if separator is NULL, don't print
 * if one of the string is NULL, prints nil
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			if (index != (n - 1) && separator != NULL)
				printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
