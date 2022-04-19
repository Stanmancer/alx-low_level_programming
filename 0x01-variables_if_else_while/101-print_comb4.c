#include <stdio.h>

/**
 * main - entry point
 *
 * code description: prints all possible different combinations of three digits
 * Return: 0 means success
 */

int main(void)
{
	int x;

	for (x = 0; x < 1000; x++)
	{
		if ((x % 10) > ((x / 10) % 10) && (x % 10) != ((x / 10) % 10))
		{
			if ((x / 100) < ((x / 10) % 10) && (x / 100) != ((x / 10) % 10))
			{
				putchar((x / 100) + '0');
				putchar(((x / 10) % 10) + '0');
				putchar((x % 10) + '0');

				if (x < 788)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
