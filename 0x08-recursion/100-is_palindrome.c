#include "main.h"
#include <string.h>
#include <stdlib.h>


/**
 * get_length - Get the length from a string
 * @s: The string
 * Return: Length of a string
 */
int get_length(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (get_length(s + 1) + 1);
}

/**
 * helper - Revesed string
 * @s: Input string
 * @length: String length
 * Return: A reversed string
 */
int helper(char *s, int length)
{
	if (length <= 1)
		return (1);
	else if (*s == *(s + length - 1))
	{
		return (helper(s + 1, length - 2));
	}
	else
		return (0);

}

/**
 * is_palindrome - Checks if s is a palindrome
 * @s: String to check
 * Return: 1 if is string is a palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	int length;

	length = get_length(s);

	if (length <= 1)
		return (1);
	return (helper(s, length));
}
