#include "main.h"

/**
 * checker - a function to loop with the second variable
 * @n: int arg
 * @result: int arg
 * Return: square root
 */

int checker(int n, int result)
{
	if (result * result == n)
	{
		return (result);
	}
	else if (result * result > n)
	{
		return (-1);
	}
	else
		return (checker(n, result + 1));
}

/**
 * _sqrt_recursion -  function that returns the natural sqrt of a number
 * @n: int arg
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (checker(n, 0));
}
