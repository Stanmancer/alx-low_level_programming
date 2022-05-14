#include "main.h"

/**
 * _strncpy - function to copy a string
 * @dest: string 1, destination for n bytes of string 2
 * @src: string 2 to be copied to string 1
 * @n: number of bytes to be copied from string 2
 *
 * Return: the resulting string "dest"
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0' ; b++)
	{
		dest[b] = src[b];
	}

	while (n > b)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
