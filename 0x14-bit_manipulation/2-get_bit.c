#include "main.h"
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number in base 10 passed to function
 * @index: the index of the bit to get, starting from 0
 *
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit (unsigned long int n, unsigned int index)
{
	int num;
	unsigned long int mask = 1;

	mask = mask << index;
	num = n & mask;
	num = num >> index;

	return (num);
}
