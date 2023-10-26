#include "main.h"

/**
 * get_endianness - function that checks the edianness
 *
 * Return: 0 for big edian and 1 for little edian
 */

int get_endianness(void)
{
	int i;
	char *j;

	i = 1;
	j = (char *)&i;
	return (*j);
}
