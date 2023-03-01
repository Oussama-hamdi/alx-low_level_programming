#include "main.h"
#include <ctype.h>
/**
 * string_toupper - change lowercase letteres to uppercase
 * @s: string
 *
 * Return: char
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (islower(s[i]))
		{
			s[i] = toupper(s[i]);
		}
	}

	return (s);
}
