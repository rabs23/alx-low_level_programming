#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: the number of arguments passed into the function
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int j;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (j = 0; j < n; j++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
