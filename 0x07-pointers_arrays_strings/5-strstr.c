#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string passed to function to be searched
 * @needle: the substring to be located
 *
 * Return: a pointer to the beginning of the located substring or NULL if
 * substring is not found
 */

char *_strstr( char *haystack, char *needle)
{
	char *i;
	char *k;

	for (; *haystack != '\0'; haystack++)
	{
		i = haystack;
		k = needle;

		while (*i == *k && *k != '\0')
		{
			i++;
			k++;
		}
		if (*k == '\0')
			return (haystack);
	}
	return (0);
}
