#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: first value
 * @b: second value
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int firstValue = *a;

	*a = *b;
	*b = firstValue;
}
