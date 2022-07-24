#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number in base 10 passed to function
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int shift;

	/**
	*if (n == 0)
	*{
	*	_putchar('0');
	*	return;
	*}
	*while (shift >= 1)
	*{
	*	if ((shift & 1) == 0)
	*		_putchar('0');
	*	else if ((shift & 1) == 1)
	*		_putchar(1 + '0');
*
	*	shift = shift >> 1;
	*}
	*/

	/* Recursive algo */
	shift = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}

	print_binary(shift >> 1);

	if ((shift & 1) == 0)
		_putchar('0');
	else if ((shift & 1) == 1)
		_putchar('1');
}
