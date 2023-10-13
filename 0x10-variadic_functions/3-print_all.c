#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: list of argument types passed to the function
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	char *str;
	unsigned int j = 0, commaCheck = 0;
	va_list ap;

	va_start(ap, format);

	while (format && format[j])
	{
		if (commaCheck)
			printf(", ");
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
			str = va_arg(ap, char*);
			if (str)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		default:
			commaCheck = 0;
			j++;
			continue;
		}
		commaCheck = 1, j++;
	}
	putchar('\n');

	va_end(ap);
}
