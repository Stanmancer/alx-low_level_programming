#include <stdio.h>

/**
 * main - entry point
 * printf - prints specified string
 *
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", (long)sizeof(int));
	printf("Size of a long long int: %lli byte(s)\n", (long long)sizeof(int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}
