#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function to return a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as parameter
 * @str: string given as parameter
 *
 * Return: if success, returns pointer to duplicated string. if str = NULL,
 * returns NULL
 */

char *_strdup(char *str)
{
	int i;
	int j;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{}

	ptr = malloc(sizeof(char) * (i + 1));

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
	{
		ptr[j] = str[j];
	}

	return (ptr);
}
