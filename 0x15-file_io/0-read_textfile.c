#include "holberton.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: file to read and print of type char.
 *@letters: number of letters of type size_t.
 *Return: number of letters it could read and print otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd, rd, wr;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	rd = read(fd, buff, letters);
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1)
		return (0);

	close(fd);
	free(buff);

	return (wr);
}
