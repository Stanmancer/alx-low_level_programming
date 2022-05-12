#include "main.h"

/**
 * puts_half - function to print the second half of a string
 * @str: string pass to the function
 *
 * Return: no return value
 */

void puts_half(char *str)
{
	int a;
	int n;

	for (a = 0; str[a] != '\0'; a++)
	{}

	a -= 1;
	n = a / 2;

	for (n += 1; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
