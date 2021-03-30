#include "holberton.h"

/**
 *create_file - creates a file.
 *@filename: name of the file to create char.
 *@text_content: content of the file string.
 *Return: 1 on success otherwise -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			continue;

		wr = write(fd, text_content, len);
		if (wr == -1)
		{
			return (-1);
		}
	}

	close(fd);

	return (1);
}
