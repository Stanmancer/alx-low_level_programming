#include <stdio.h>

/**
 * main - entry point
 *
 * code description: prints the alphabet in lowercase then in uppercase
 * Return: 0 means sucess
 */

int main(void)
{
	int l, u;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}

	putchar('\n');

	return (0);
}
