#include "main.h"

/**
 * main - entry points & prints all the arguments it receives
 * @argc: Arguments Count
 * @argv: Arguments Vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
