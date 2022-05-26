#include <stdio.h>

/**
 * main - a program to print its name, followed by a new line
 * @argc: argument counter
 * @argv: array of pointers to char
 *
 * Return: 0 means sucess
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
