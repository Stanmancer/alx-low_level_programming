#include "main.h"

/**
 * puts2 - function to print every other characters of a string
 * @str: the string passed to the function
 *
 * Return: no return value
 */

void puts2(char *str)
{
	int b = 0;

	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b += 2;

		if (str[b] == '\0')
			break;
	}
	_putchar('\n');
}
