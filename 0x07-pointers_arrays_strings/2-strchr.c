#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string passed to function
 * @c: character to be located
 *
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
		else if (s[i] == '\0')
			break;
	}
	return ('\0');
}
