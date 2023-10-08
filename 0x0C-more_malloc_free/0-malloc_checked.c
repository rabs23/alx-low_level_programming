#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: unsigned int
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (0);
}
