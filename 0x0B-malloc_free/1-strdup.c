#include "main.h"
#include "string.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to copy
 * Return: NULL or a Pointer
 */

char *_strdup(char *str)
{
	char *st;
	int len = strlen(str);

	if (str == NULL)
		return (NULL);

	st = malloc((len + 1) * sizeof(char));

	if (st == NULL)
		return (NULL);

	strncpy(st, str, len);
	st[len] = '\0';


	return (st);
}
