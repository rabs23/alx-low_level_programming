#include "search_algos.h"
#include <math.h>

/**
 * jump_search - a function that searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: search value
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int index, a, b, prev;

	if (array == NULL || size == 0)
		return (-1);

	a = (int)sqrt((double)size);
	b = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		b++;
		prev = index;
		index = b * a;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
