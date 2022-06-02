#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates string 1 with the first n bytes of string 2
 * @s1: string 1
 * @s2: string 2
 * @n: no of bytes to be concatenated from string 2
 *
 * Return: on success, pointer to newly alloc'd memory space containing s1 and
 *	first n bytes of s2. NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	unsigned int b;
	char *ptr;

	/* treats as an empty string if NULL is passed to s1 || s2 */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* string lenght counters for s1 and s2 */
	for (a = 0; s1[a] != '\0'; a++)
	{}
	for (b = 0; s2[b] != '\0'; b++)
	{}

	/* if n > lenght of s2, lenght of s2 is used instead of n */
	if (n >= b)
		n = b;

	/* memory alloc */
	ptr = malloc(sizeof(*ptr) * (a - 1 + n));

	if (ptr == NULL)
		return (NULL);

	/* concatenantion to new memory */
	for (a = 0; s1[a] != '\0'; a++)
		ptr[a] = s1[a];

	for (b = 0; b < n; b++)
	{
		ptr[a] = s2[b];
		a++;
	}

	ptr[a] = '\0';

	return (ptr);
}
