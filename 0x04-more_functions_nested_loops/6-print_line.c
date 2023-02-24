#include "main.h"

/**
 * print_line - print '_' n times
 * @n: represent the number of lines to be printed
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		for (; n > 0; n--)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
