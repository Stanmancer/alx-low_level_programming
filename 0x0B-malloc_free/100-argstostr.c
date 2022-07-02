#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all arguments of a program
 * @ac: argument counter
 * @av: array of pointers to char
 *
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j;
	int a, b, c;
	int n;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			c++;

		c++;
	}

	str = malloc(sizeof(*str) * (c + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	n = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[n] = av[a][b];
			n++;
		}

		str[n++] = '\n';
	}

	return (str);
}
