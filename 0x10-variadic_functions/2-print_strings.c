#include "variadic_functions.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that print strings followed by a new line
 * @separator: separator between strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
			printf("%s", separator);

	}
	printf("\n");
	va_end(list);
}
