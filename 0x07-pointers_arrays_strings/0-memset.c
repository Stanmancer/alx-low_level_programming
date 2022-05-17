#include "main.h"

/**
 * _memset - function to fill a memory with a constant byte
 * @s: the address of memory to be filled
 * @b: the constant byte
 * @n: the number of byte to be filled in the memory
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
