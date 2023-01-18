#include "main.h"
#include <stdio.h>

/**
 * exit_98 - exit with error 98
 */

/**
 * cp_file_to_file - copies the content of a file to another file
 * @file_from: pointer to file to be copied from
 * @file_to: pointer to file to be copied to
 *
 * Return: 1 on sucess, -1 on failure
 */

void cp_file_to_file(const char *file_from, char *file_to)
{
	int fd_from, fd_to, n_text = 1024;
	int rd, wr, cl_from, cl_to;
	char buffer[1024];

	for (n_text = 0; file_from[n_text] != '\0'; n_text++)
	{}

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);

	if (fd_from == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	while (rd == 1024)
	{
		rd = read(fd_from, buffer, 1024);
		if (rd == -1)
			exit_98(rd); /* pause: create error function for 98 and 99 */

		wr = write(fd_to, buffer, rd);
		if (wr == -1)
			exit_99(wr);
	}

	if (fd_to == -1 || wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	cl_from = close(fd_from);
	cl_to = close(fd_to);

	if (cl_from == -1 || cl_to == -1)
	{
		if (cl_from == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_from);
		if (cl_to == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_to);
		exit(100);
	}
}

/**
 * main - entry
 * @argc: arguments counter
 * @argv: pointer to array of chars
 *
 * Desc: a program that copies the content of a file to another file
 * Usage: cp file_from file_to
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	cp_file_to_file(argv[1], argv[2]);

	return (0);
}
