#include "main.h"

/**
 * _mysqrt - my function to calculate the square root  of a number
 * @n: number passed to function
 * @i: integers from 0 till the square root of n
 *
 * Return: the square root (int)
 */

int _mysqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_mysqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function that returs the square root of a number
 * @n: number passed to function
 *
 * Return: the suare root of the given number (int)
 */

int _sqrt_recursion(int n)
{
	return (_mysqrt(n, 0));
}
