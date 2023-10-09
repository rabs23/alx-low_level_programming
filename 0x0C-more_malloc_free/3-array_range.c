#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: least value
 * @max: largest value
 * Return: pointer to the newly created array and NULL at failure
 */

int *array_range(int min, int max)
{
	int j, s;
	int *k;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	k = malloc(sizeof(int) * s);
	if (k == NULL)
		return (NULL);
	for (j = 0; j < s; j++)
	{
		k[j] = min;
		min++;
	}
	return (k);
}
