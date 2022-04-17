#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints the 26 alphabets in lowercase
 * Return: 0 means sucess
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
