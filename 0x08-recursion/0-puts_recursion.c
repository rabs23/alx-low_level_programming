#include "main.h"

/**
 * _puts_recursion - a function that prints a string and a new line
 * @s: string to be printed
 * Return: 0 at success
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
