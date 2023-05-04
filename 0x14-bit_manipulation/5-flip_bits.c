#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another
 * @n: First num
 * @m: Second num
 * Return: The number of bits you need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, count = 0;

	while (x > 0)
	{
		if ((x & 1) == 1)
			++count;

		x >>= 1;
	}

	return (count);
}
