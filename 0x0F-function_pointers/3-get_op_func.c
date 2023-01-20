#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - gets the correct func to perform operation asked by the user
 * @s: is the operator passed as argument to the program
 *
 * Return: a ptr to the corresponding func of the operator given as parameter
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
