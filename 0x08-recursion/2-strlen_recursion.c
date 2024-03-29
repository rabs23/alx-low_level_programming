#include "main.h"

/**
 * _strlen_recursion - function that returns the lenght of a string
 * @s: string to be returned
 * Return: 0 on success
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
