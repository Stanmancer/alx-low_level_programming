#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name with a function pointer passed to it
 * @name: name of the person
 * @f: function passed to 'print_name'
 */

void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *) = f;
	ptr(name);
}
