#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @f: pointer
 * @name: char pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
