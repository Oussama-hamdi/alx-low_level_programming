#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the sum of even-valued
 *		Fibonnaci sequence under 4million
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num1 = 0, num2 = 1, sum, total = 0;

	while (1)

	{
		sum = num1 + num2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total += sum;

		num1 = num2;
		num2 = sum;
	}

	printf("%ld\n", total);

	return (0);

}
