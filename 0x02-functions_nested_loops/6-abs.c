#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: value for absolute
 *
 * Return: the absolute value
 */

int _abs(int i)
{
	if (i >= 0)
		return (i * 1);
	else if (i < 0)
		return (i * -1);
	return (0);
}
