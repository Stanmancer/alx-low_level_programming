#include "main.h"

/**
 * _pow_recursion - function that returns x raised to the power of y
 * @x: the number
 * @y: the power
 *
 * Return: value of x raised to the power of y or -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
