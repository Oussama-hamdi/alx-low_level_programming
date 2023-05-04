#include "main.h"

/**
 * binary_to_uint - Convert a binary to decimal
 * @b: Pointer to a binary string
 * Return: unsigned decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int pow = 1, length = 0, res = 0;

	if (!b)
		return (0);

	while (b[length])
	{
		if (b[length] != '1' && b[length] != '0')
			return (0);

		++length;
	}

	while (length)
	{
		if (b[length - 1] == '1')
			res += pow;
		pow *= 2;
		--length;
	}
	return (res);
}
