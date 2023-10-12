#include "function_pointers.h"

/**
 * array_iterator - executes a function as a parameter on each element
 * of an array
 * @array: int pointer
 * @size: size of the array
 * @action: pointer to the array to be used
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array && size && action)
	{
		for (j = 0; j < size; j++)
		{
			action(array[j]);
		}
	}
}
