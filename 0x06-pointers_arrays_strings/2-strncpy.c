#include "main.h"

/**
 * _strncat - function to concatenate two strings using at most 'n' bytes
 * @dest: string 1, destination for n bytes of string 2
 * @src: string 2 to be concatenated with string 1
 * @n: number of bytes to be concatenated from string 2
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
