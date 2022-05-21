#include "main.h"

/**
 * _strspn - function that gets the lenght of a prefix substring
 * @s: string passed to function
 * @accept: substring of accepted chars
 *
 * Return: number of bytes in the initial segment of s which consists only of
 *	bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i;
	int j;

	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}
	}
	return (n);
}
