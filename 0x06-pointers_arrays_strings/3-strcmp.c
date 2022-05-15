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
	int cmp;
	
	cmp = 0;

	for (a = 0; s1[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			cmp = s1[a] - s2[a];
			break;
		}
	}
	return (cmp);
}
