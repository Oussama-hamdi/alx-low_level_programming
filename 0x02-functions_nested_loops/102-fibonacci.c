#include <stdio.h>

/**
 * main - print fibonacci
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int num1 = 1, num2 = 2, i, next;

	printf("%ld, %ld, ", num1, num2);

	for (i = 3; i <= 50; i++)
	{
		next = num1 + num2;

		if (i != 50)
		{
			printf("%ld, ", next);
		}
		else
		{
			printf("%ld", next);
		}

		num1 = num2;
		num2 = next;

	}

	printf("\n");
	return (0);
}
