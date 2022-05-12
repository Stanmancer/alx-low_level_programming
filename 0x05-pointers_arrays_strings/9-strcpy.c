#include "main.h"

/**
 * _strcpy - function to copy a string
 * @dest: destination for the copied string
 * @src: string passed to the function
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; src[a] != '\0'; a++)
	{}

	for (b = 0; b <= a; b++)
	{
		dest[b] = src[b];
	}

	return (dest);
}
