#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number,
 *	   or 0 if one or more chars in the string are not 0 and 1
 *	   or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1;
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	for (; b[i] != '\0'; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);
	i--;
	for (; i >= 0; i--)
	{
		num += (b[i] - '0') * base;
		base = base * 2;
	}
	return (num);
}
