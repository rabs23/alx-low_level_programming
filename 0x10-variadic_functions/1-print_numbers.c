#include "variadic_functions.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers followed by a new line
 * @n: the number of integers passed to the functions
 * @separator: string to be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list list;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(list, int));

		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
