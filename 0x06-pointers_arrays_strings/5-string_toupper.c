#include "main.h"

/**
 * string_toupper - function to change all lowercase letters to uppercase
 * @str: string passed to function
 *
 * Return: string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ' ';
		}
	}
	return (str);
}
