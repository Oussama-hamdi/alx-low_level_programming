#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print a sequence of fibonnaci numbers 98 times
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int n1 = 1, n2 = 2, next;
	int i;

	printf("%lu, %lu, ", n1, n2);

	for (i = 3; i <= 98; i++)
	{
		next = n1 + n2;

		if (i != 98)
		{
			printf("%lu, ", next);
		}
		else
		{
			printf("%lu\n", next);
		}

		n1 = n2;
		n2 = next;
	}

	return (0);
}
