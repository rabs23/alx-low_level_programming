#include "main.h"

/**
 * get_bit - function that returns the value of bit of a given index
 * @index: the index at which the bit is checked
 * @n: number to check the bits
 *
 * Return: value of the bit at index or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value, checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	value = 1 << index;
	checker = n & value;
	if (checker == value)
		return (-1);
	return (0);
}
