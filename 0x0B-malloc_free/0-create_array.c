#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates array of chars and initializes with one special char
 * @c: stored char
 * @size: size of memory
 * Return: pointer to array at success and NULL at failure
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(c) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
