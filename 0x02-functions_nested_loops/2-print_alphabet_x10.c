#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	do {
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		i++;
	} while (i != 10);
}
