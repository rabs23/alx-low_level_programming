#include "main.h"

/**
 * clear_bit - function that sets the value of bit at a given inde to 0
 * @index: the set index
 * @n: pointer
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
