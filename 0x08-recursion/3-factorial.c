#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: number passed to function
 *
 * Return: factorial of n or -1 to indicate error if n < 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
