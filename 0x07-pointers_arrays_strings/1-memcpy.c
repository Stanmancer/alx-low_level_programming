#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: address to be copied to
 * @src: address to copy from
 * @n: number of bytes to copy
 *
 * Return: destination address (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
