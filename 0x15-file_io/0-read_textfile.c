#include "main.h"

/**
 * read_textfile - reads a text file and print it to the POSIX standard output
 * @filename: pointer to text file to be read
 * @letters: number of letters it should read
 *
 * Return: actual number of letters it could read and print,
 *	   0, if the file can't be opened or read,
 *	   0, if filename is NULL,
 *	   0, if write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(fd);
	free(buffer);

	return (wr);
}
