#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to a newly allocated memory space containing s1 and s2.
 *	NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i;/* string 1 counter */
	int j;/* string 2 counter */
	int k;
	int m;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (j = 0; s2[j] != '\0'; j++)
	{}
	i -= 1;/* removes '\0' char at end of s1 */

	ptr = malloc(sizeof(char) * (i + j));

	if (ptr == NULL)
		return (NULL);

	for (k = 0; k <= i; k++)
		ptr[k] = s1[k];
	for (m = 0; m <= j; m++)
	{
		ptr[k] = s2[m];
		k++;
	}

	return (ptr);
}
