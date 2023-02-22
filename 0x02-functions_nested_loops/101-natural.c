#include <stdio.h>

/**
 * main - natural numbers multiples of 3 or 5 and bellow 1024
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);
	return (0);
}
