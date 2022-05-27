#include <stdio.h>
#include <stdlib.h>

/**
 * main - progran that prints the minimum number of coins to make change for
 * an amount of money
 * @argc: argument counter
 * @argv: array of pointers to char
 *
 * Return: 0 for sucess, 1 for error
 */

int main(int argc, char *argv[])
{
	int coins;
	int cents;

	coins = 0;
	cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
		printf("0\n");
	else
	{
		while (cents != 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;

			coins += 1;
		}
		printf("%d\n", coins);
	}
	return (0);
}
