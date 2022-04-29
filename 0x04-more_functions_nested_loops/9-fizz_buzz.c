#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz");

		else if ((i % 3) == 0)
			printf("Fizz");

		else if ((i % 5) == 0)
			printf("Buzz");

		else if (i < 10)
			printf("%d", i);
		else
		{
			printf("%d", i / 10);
			printf("%d", i % 10);
		}

		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
