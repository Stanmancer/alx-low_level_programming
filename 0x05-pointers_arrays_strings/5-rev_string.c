#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string array passed to the function
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a;
	int n;
	char temp; /* temp storage for the array value*/


	for (a = 0; s[a] != '\0'; a++)
	{}

	a -= 1;

	for (n = 0; n < a; n++)
	{
		temp = s[n];
		s[n] = s[a];
		s[a] = temp;
		a -= 1;
	}

}
