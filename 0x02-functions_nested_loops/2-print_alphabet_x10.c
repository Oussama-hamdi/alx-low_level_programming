#include "main.h"
/**
 * print_alphabet_x10 - check code
 *
 * Description: print the alphabet x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char l;
	char i;

	for (i = 0; i < 10; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}

		_putchar('\n');
	}
}
