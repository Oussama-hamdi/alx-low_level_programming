#include "main.h"

/**
 * get_length - get the length of a string
 * @str: the string
 * Return: str length
 */

int get_length(char *str)
{
	int len = 0, i = 0;

	while (str[i])
	{
		len++;
		i++;
	}
	return len;
}

int is_palindrome(char *s)
{
	int length = get_length(s), i = 0;

	while (i < length / 2)
	{
		if (s[i] != s[length - i - 1])
			return (0);
		i++;
	}
	return (1);
}
