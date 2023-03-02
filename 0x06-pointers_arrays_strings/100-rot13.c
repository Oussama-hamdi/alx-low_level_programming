#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: The string
 * Return: char array
 */

char *rot13(char *s)
{

	int i = 0, j;

	char code[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char decode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		for (j = 0; code[j] != '\0'; j++)
		{
			if (s[i] == code[j])
			{
				s[i] = decode[j];

				break;
			}
		}

		i++;
	}

	return (s);
}
