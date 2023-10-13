#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - function that print strings followed by a new line
 * @n: number of strings passed to the function
 * @separator: string to be printed between strings
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	char *args;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		args = va_arg(ap, char*);

		if (args)
		{
			printf("%s", args);
		}
		else
		{
			printf("(nil)");
		}

		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}

	putchar('\n');

	va_end(ap);
}
