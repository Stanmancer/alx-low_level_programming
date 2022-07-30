#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to name of file
 * @text_content: pointer to NULL terminated string to add at end of file
 *
 * Return: 1 on success, -1 on failure,
 *	   -1 if filename is NULL,
 *	   -1 if file does not exist, or write fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, n_text;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	for (n_text = 0; text_content[n_text] != '\0'; n_text++)
	{}

	wr = write(fd, text_content, n_text);
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
