#include "3-calc.h"

/**
 * op_add - computes the sum of a and b
 * @a: integer 1
 * @b: integer 2
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - computes the difference between a and b
 * @a: integer 1
 * @b: integer 2
 *
 * Return: difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - computes the product of a and b
 * @a: integer 1
 * @b: integer 2
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - computes the division of a by b
 * @a: integer 1
 * @b: integer 2
 *
 * Return: result of division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - computes the modulus of a and b
 * @a: integer 1
 * @b: integer 2
 *
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
