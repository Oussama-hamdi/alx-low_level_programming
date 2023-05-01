#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: arguments count
 * @argv: arguments array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *arr;
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (bytes - 1 == i)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}

	return (0);
}
