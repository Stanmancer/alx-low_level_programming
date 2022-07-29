#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to name of file to create
 * @text_content: pointer to NULL terminated string to write to the file
 *
 * Return: 1 on success,
 *	   -1 on failure (file creation failed, 'write' fails, etc)
 *	   -1 if fialename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr;
	int n_text;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (n_text = 0; text_content[n_text] != '\0'; n_text++)
	{}

	wr = write(fd, text_content, n_text);
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
