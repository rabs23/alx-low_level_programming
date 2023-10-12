#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: size of array
 * @array: pointer
 * @cmp: pointer to function
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && size && cmp)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]))
			{
				return (1);
			}
		}
	}
	return (-1);
}
