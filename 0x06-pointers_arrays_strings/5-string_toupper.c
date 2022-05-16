#include "main.h"

/**
 * string_toupper - function to change all lowercase letters to uppercase letters
 *
 * Return: string
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ' ';
			i++;
		}
	}
	return (str);
}
