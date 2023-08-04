#include "main.h"

/**
 * _strlen_recursion - a function that returns the lenght of a string
 * @s: the string to be returned
 * Return: 0 at success
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
