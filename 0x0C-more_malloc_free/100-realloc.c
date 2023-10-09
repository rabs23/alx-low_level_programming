#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the old memory
 * @old_size: old size of the memory block
 * @new_size: new size of the memory block
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *k;
	size_t a, new = new_size;
	char *older = ptr;

	if (ptr == NULL)
	{
		k = malloc(new_size);
			return (k);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	k = malloc(new_size);
	if (k == NULL)
		return (NULL);
	if (new_size == old_size)
		new = old_size;
	for (a = 0; a < new; a++)
		k[a] = older[a];
	free(ptr);
	return (k);
}
