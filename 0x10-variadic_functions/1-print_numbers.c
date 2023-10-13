#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - function that prints numbers followed by a new line
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int j;

	va_start(ap, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(ap, unsigned int));

		if (separator != NULL && j < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');

	va_end(ap);
}
