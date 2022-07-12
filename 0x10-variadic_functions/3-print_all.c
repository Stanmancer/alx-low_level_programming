#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints any data type passed to the variadic function
 * @format: list of types of arguement passed to the function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j;
	char *str;
	const char spfr[] = "cifs";

	va_start(list, format);

	while (format[i] != '\0')
	{
		j = 0;

		while (spfr[j] != '\0')
		{
			if (i != 0 && format[i] == spfr[j])
				printf(", ");
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
