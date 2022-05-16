#include "main.h"

/**
 * cap_string - function to capitalize a string
 * @str: string to be capitalized
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if ((str[a-1] == ' ') ||
			(str[a-1] == '\t') ||
			(str[a-1] == '\n') ||
			(str[a-1] == ',') ||
			(str[a-1] == ';') ||
			(str[a-1] == '.') ||
			(str[a-1] == '!') ||
			(str[a-1] == '?') ||
			(str[a-1] == '"') ||
			(str[a-1] == '(') ||
			(str[a-1] == ')') ||
			(str[a-1] == '{') ||
			(str[a-1] == '}'))
			if (str[a] >= 'a' && str[a] <= 'z')
				str[a] = str[a] - ' ';
	}
	return (str);
}
