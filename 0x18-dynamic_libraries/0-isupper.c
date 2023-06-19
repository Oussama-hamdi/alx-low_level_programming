#include "main.h"
#include <ctype.h>

/**
 * _isupper - check if letter is upperCase
 *
 * @c: character being checked
 *
 * Return: 1 if is upperCase else 0
 */

int _isupper(int c)
{
	return (isupper(c) ? 1 : 0);
}
