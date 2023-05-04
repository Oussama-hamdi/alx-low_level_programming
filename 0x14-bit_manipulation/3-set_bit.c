#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to the value
 * @index: Index to set the value at
 * Return: 1 in success else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
