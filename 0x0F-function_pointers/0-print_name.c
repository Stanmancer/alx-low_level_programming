#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: pointer to string passed to function
 * @f: pointer to a function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
