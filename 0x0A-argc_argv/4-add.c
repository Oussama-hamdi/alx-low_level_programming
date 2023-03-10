#include "main.h"

/**
 * main - entry point & adds positive numbers
 * @argc: Arguments Count
 * @argv: Arguments Vector
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= 48 && *argv[i] <= 57)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");

			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
