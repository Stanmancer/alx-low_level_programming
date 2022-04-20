#include <stdio.h>

/**
 * main - entry point
 *
 * code description: prints all possible combinations of two two-digit numbers
 * Return: 0 means success
 */

int main(void)
{
	int i = 0;
	int a;

	for (a = 1; a < 100; a++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(' ');
		putchar((a / 10) + '0');
		putchar((a % 10) + '0');

		if (i < 98)
		{
			putchar(',');
			putchar(' ');
		}

		if (a == 99)
		{
			i++;
			a = i;
		}
	}

	putchar('\n');
	return (0);
}
