#include "main.h"
#include <ctype.h>

/**
 * _isdigit - A function that checks for a digit
 * @c: an argument to check
 * Return: 1 if is digit else 0
 */

int _isdigit(int c)
{
	return (isdigit(c) ? 1 : 0);
}
