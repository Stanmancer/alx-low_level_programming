#include "main.h"

/**
 * _strlen_recursion - function that returns the lenght of a string
 * @s: string passed to function
 *
 * Return: lenght of the string (int)
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
