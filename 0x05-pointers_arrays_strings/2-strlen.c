#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string passed to the function
 *
 * return: returns an integer
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{}

	return (a);
}
