#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array using Binary search algo
 * @array: A pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 * Return: The first index where the value is located else -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, right = size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;

		printf("Searching in array: ");

		for (i = left; i <= right; ++i)
		{
			printf("%d", array[i]);

			if (i < right)
				printf(", ");
			else
				printf("\n");
		}

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
