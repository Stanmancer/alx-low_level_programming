#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer a number
 * @index: the index of the bit to be changed, starting from 0
 *
 * Return: 1 on sucess or -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 4))
		return (-1);
	mask = mask << index;
	(*n) = (*n) | mask;

	if (n[index] == 1)
		return (-1);
	if (n[index] != 1)
		return (1);
	return (0);
}
