#include "main.h"

/**
 * print_rev - a function that prints a string in reverse and a new line
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}

	while (count)
	{
		s--;
		_putchar(*s);
		count--;
	}

	_putchar('\n');

}
