#include "main.h"

/**
 * factorial - function that prints the factorial of a number
 * @n: the given number
 * Return: return -1 when n is less than 0 to indicate error
 * return the factorial of the number on success
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

