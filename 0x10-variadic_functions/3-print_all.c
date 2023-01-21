#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of the types of argument passed to the function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int k, j, i = 0;
	char *str;
	const char spfr[] = "cifs";

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (spfr[j])
		{
			if ((k == 1) && format[i] == spfr[j])
				printf(", ");
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int)), k = 1;
				break;
			case 'i':
				printf("%i", va_arg(list, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double)), k = 1;
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
				{
					printf("(nil)"), k = 1;
					break;
				}
				printf("%s", str), k = 1;
				break;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
