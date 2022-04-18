#include <stdio.h>

/**
 * main - entry point
 *
 * code description: prints all numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	char x;
	char y;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (y = 'a'; y <= 'f'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
