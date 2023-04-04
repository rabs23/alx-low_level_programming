#include "main.h"

/**
 * _memset - a function that fills a memory with a constant byte
 * @n: bytes
 * @s: pointed direction
 * @b: constant byte
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
