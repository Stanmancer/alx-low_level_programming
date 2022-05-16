#include "main.h"
#include <stdio.h>

/**
 * leet - function to encode a string into 1337
 * @str: string passed to function
 *
 * Return: str
 */

char *leet(char *str)
{
	int a;
	int b;
	char *num;
	char *leet;

	leet = "AaEeLlOoTt";
	num = "4433110077";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; leet[b] != '\0'; b++)
		{
			if (str[a] == leet[b])
				str[a] = num[b];
		}
	}
	return (str);
}
