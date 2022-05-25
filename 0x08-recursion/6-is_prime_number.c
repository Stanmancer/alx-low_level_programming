#include "main.h"

/**
 * is_prime_number - function that checks if an input integer is a prime number
 * @n: input integer
 *
 * Return: 1 if input integer is a prime number and 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	return (_modprime(n, 2));
}

/**
 * _modprime - function that computes the modulus of n until it gets a 0 value
 * @n: input integer from caller function
 * @i: integers from 2 till n
 *
 * Return: 0 or 1
 */

int _modprime(int n, int i)
{
	if (n == 1)
		return (0);
	if ((n != i) && (n % i == 0))
		return (0);
	if (n == i && n % i == 0)
		return (1);
	else /*(n != i && n % i != 0)*/
		return (_modprime(n, i + 1));
}
