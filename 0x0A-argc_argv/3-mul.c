#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument counter
 * @argv: array of pointers to char
 *
 * Return: 0 for sucess, 1 for error
 */

int main(int argc, char *argv[])
{
	int i;
	int j;

	i = atoi(argv[argc - 1]);
	j = atoi(argv[argc - 2]);

	if (argc == 3)
	{
		printf("%d\n", i * j);
		return (0);
	}

	printf("Error\n");
	return (1);
}
