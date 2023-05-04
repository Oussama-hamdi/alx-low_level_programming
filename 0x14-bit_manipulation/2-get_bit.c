#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The decimal to check
 * @index: The index
 * Return: Index in success or -1 in error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
