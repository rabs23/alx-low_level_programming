#include "main.h"
/**
 * _calloc - it allocates memory to an array and returns a pointer
 * @nmemb: elements of size
 * @size: size of memory to print
 * Return: NULL at failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *k;
	size_t a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	k = malloc(nmemb * size);
	if (k == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		k[a] = 0;
	return (k);

}
