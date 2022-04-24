#include "main.h"

/**
 * _islower - checks for lowercase alphabets
 * @c: the letter to be checked
 *
 * Return: 1 if input is lowwercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
