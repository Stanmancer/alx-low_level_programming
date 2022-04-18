#include <stdio.h>

/**
 * main - entry point
 *
 * code description: prints all single digit numbers of base 10
 * Return: 0 means sucess
 */

int main(void)
{
	int l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
