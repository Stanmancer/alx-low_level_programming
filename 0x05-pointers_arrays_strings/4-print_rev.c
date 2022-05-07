#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string passed to function
 *
 * Return: void
 */

void print_rev(char *s)
{
	int a; /* size of arraycounter */
	int n;

	for (a = 0; s[a] != '\0'; a++)
	{}

	for (n = a - 1; &(s[n]) >= &(s[0]); n--)
	{
		_putchar(*(s + n));
	}
	_putchar('\n');
}
