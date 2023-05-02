#include "main.h"

/**
 * main - Prints the minimum number of coins
 * @argc: Arguments count
 * @argv: Arguments value
 * Return: 1 if the number of args passed else 0
 */

int main(int argc, char **argv)
{
	int coins = 0, am;

	if (argc == 2)
	{
		am = atoi(argv[1]);
		if (am < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (am % 25 >= 0)
		{
			coins += am / 25;
			am %= 25;
		}
		if (am % 10 >= 0)
		{
			coins += am / 10;
			am %= 10;
		}
		if (am % 5 >= 0)
		{
			coins += am / 5;
			am %= 5;
		}
		if (am % 2 >= 0)
		{
			coins += am / 2;
			am %= 2;
		}
		if (am % 1 >= 0)
			coins += am;
		printf("%d\n", coins);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
