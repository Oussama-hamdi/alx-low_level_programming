#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c: the character
 * Return: NULL or a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size <= 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (!arr)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
