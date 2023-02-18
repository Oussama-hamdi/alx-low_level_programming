#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 48;
	int second = 49;

	while ((first < 57) && (second < 58))
	{
		putchar(first);
		putchar(second);

		if ((first == 56) && (second == 57))
		{
			putchar('\n');

			first++;
			second++;
		}
		else
		{
			putchar(44);
			putchar(32);
			if (second < 57)
			{
				second++;
			}
			else
			{
				first++;
				second = 1 + first;
			}
		}
	}

	return (0);
}
