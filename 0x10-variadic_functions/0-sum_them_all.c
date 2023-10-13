#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - program that returns the sum of all its parameters
 * @n: unsigned int
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int a;
	int sum = 0;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}
	for (a = 0; a < n; a++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);

	return (sum);
}
