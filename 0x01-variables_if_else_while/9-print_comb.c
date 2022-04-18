#include <stdio.h>

/**
 * main - entry point
 *
 * code description: prints all possible combination of single-digit numbers
 *	seperated by comma ','
 * Return: 0 means sucess
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		putchar(',');
	}

	putchar('\n');
	return (0);
}
