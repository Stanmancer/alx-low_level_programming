#include "main.h"
#include <stdio.h>

/**
 * _strcat - function to concatenate two strings
 * @dest: string 1, also destionation for string 2
 * @src: string 2 to be concatenated with string 1
 *
 * Return: the resulting string "dest"
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{}

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
