#include "main.h"

/**
 * flip_bits - returns the number of bits that needs to be flipped to get
 *		one number from another
 * @n: original number
 * @m: number to be flipped to
 *
 * Return: number of bits that needs to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			bits++;
		n >>= 1;
		m >>= 1;
	}
	return (bits);
}
