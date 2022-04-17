#include <stdio.h>

/**
 * main - entry point
 *
 * code description: prints lowercase alphabets except 'q' and 'e'
 * Return: 0 (sucess)
 */

int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && l != 'e')
			putchar(l);
	}
	putchar('\n');
	return (0);
}
