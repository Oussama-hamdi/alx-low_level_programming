#include "main.h"
/**
 * print_last_digit - function that prints the last digit
 * @r: parameter member r
 * Return: last digit
 */
int print_last_digit(int r)
{
	int i;

	if (r < 0)
	{
		r = -r;
	}

	i = r % 10;

	if (i < 0)
	{
		i = -i;
	}

	_putchar(i + '0');

	return (i);
}
