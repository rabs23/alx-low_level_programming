#include "main.h"

/**
 * set_bit - function that sets the value of bit tto 1 at a given index
 * @n: pointer to the value
 * @index: the index that is set
 * Return: 1 on success, -1 at error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	value = 1 << index;
	*n = *n | value;
	return (1);
}

