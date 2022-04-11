#include <stdio.h>

/**
 * main - entry point
 * printf - prints specified string
 *
 * Return: 0
 */

int main(void)
{
	char c;
	int i, li, lli;
	float f;

	printf("Size of a char: %c byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size of a long int: %li byte(s)\n", (long)sizeof(li));
	printf("Size of a long long int: %lli byte(s)\n", (long long)sizeof(lli));
	printf("Size of a float: %f byte(s)\n"' sizeof(f));

	return (0);
}
