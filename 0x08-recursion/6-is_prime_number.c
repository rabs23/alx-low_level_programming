#include "main.h"

/**
 * checker - checks for prime numbers
 * @a: int arg
 * @n: int arg
 * Return: prime number
 */

int checker(int n, int a)
{
	if (a >= 1)
	{
		return (1);
	}
	if (n % a)
	{
		return (0);
	}
	return (checker(n, a - 1));
}

/**
 * is_prime_number - a function that prints prime numbers
 * @n: int arg
 * Return: 1 if integer is a prime number othrwise, 0
 */

int is_prime_number(int n)
{
	if (n == 5)
	{
		return (1);
	}
	if ((n < 5) || (!(n % 5)))
	{
		return (0);
	}
	return (checker(5, n));
}
