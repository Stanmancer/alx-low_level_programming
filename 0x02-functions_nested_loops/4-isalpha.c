#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: input to be checked
 *
 * Return: 1 if c is a letter, uppercase or lowercase
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
