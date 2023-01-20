#include <stdio.h>
#include <stdlib.h>

void print_opcode(char *f, int n);

/**
 * print_opcode - prints the opcode of its own main function
 * @f: address of the main function
 * @n: number of bytes
 *
 * Return: nothing
 */

void print_opcode(char *f, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2x", f[i]);

		if (i < n - 1)
			putchar(' ');
	}

	putchar('\n');
}

/**
 * main - entry point
 * @argc: argument counter
 * @argv: array of pointers to char passed as arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcode((char *)&main, n);

	return (0);
}
