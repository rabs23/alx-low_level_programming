#include "main.h"

/**
 * main - a function that copies memory area
 * @n: bytes to be copied
 * @src: copy from
 * @dest: copy to
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
