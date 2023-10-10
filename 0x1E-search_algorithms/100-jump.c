#include "search_algos.h"

/**
 * jump_search - Searches for a value in an array using Binary search algo
 * @array: A pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 * Return: The first index where the value is located else -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, nav, step;

	if (!array || !size)
		return (-1);

	step = sqrt(size);

	for (i = nav = 0; nav < size && array[nav] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", nav, array[nav]);
		i = nav;
		nav += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, nav);

	nav = (nav < size) ? nav : size - 1;

	for (; i < nav && array[i] < value; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	if (array[i] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		return (i);
	}

	printf("Value checked array[%ld] = [%d]\n", nav, array[nav]);

	return (-1);
}
