#include "main.h"

/**
 * _strcmp - function to compare two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: integer value
 */

int _strcmp(char *s1, char *s2)
{
	int a;
	int b;

	for (a = 0; s1[a] != '\0'; a++)
	{}
	a += 2;

	for (b = 0; s2[b] != '\0'; b++)
	{}
	b += 2;

	if (a == b)
		return (a - b);
	else if (a < b)
		return (-(a + b));
	else
		return (a + b);
}
