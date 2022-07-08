#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters to be passed
 *
 * Return: sum of all parameters passed to function
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(ap, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
