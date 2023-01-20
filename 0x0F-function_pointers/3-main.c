#include "3-calc.h"
#include <stdlib.h>

/**
 * main - performs simple arithmetic operations(+, -, *, /, %) by complex means
 * @argc: argument counter
 * @argv: array of pointers to char passed as argument
 *
 * Return: 0 on sucess, 1 on failure
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int result;
	char op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = *argv[2];
	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(num1, num2);

	printf("%i\n", result);

	return (0);
}
