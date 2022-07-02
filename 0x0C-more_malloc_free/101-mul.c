#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - program that multiplies two +ve numbers passed as arguments
 * @argc: argument counter
 * @argv: array of pointers to char
 *
 * Return: 0 for succes, 1 for error
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	unsigned long int mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
		for (j = 0; argv[i][j] != '\0'; j++)
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}

	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%lu\n", mul);
	return (0);
}
