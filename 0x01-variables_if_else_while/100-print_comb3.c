#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints all possible combination of two digits
 *
 * Return: 0 means success
 */

int main(void)
{
	int x;
	int a, b;

	for (x = 0; x < 100 ; x++)
	{
		if ((x / 10) < (x % 10))
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
		}
		if (x < 89 && (x / 10) < (x % 10))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
