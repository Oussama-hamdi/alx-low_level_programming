#include <stdio.h>

/**
 * main - This is my function
 *
 * print the size of various types on the computer it is compiled and run on.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(d));
	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
