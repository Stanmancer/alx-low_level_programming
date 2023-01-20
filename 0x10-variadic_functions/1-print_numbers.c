#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_numbers - prints numbers passed as arguments
 * @separator: the string to be printed between numbers
 * @n: numbers of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%i", num);

		if ((i < n - 1) && (separator != NULL))
			printf("%s", separator);
	}

	printf("\n");
}
