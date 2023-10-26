#include "main.h"

/**
 * flip_bits - function that returns the number of bits to be flipped
 * @n: one number
 * @m: another number
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter;
	unsigned long int value;
	unsigned long int checker = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		value = checker >> i;
		if (value & 1)
			counter++;
	}
	return (counter);
}
