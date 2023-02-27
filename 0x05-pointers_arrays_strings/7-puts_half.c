#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 *
 * @str: the string
 */

void puts_half(char *str)
{
	int len = strlen(str) / 2;

	for (; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}

	_putchar('\n');
}
