#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: copy to
 * @src: copy from
 * @n: number of bytes
 * Return: copied memory with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
