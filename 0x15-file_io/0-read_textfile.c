#include "main.h"
/**
 * read_textfile - fucntion that reads a text file and prints it to on standard output.
 * @filename: the type char filename.
 * @letters: the type size_t letters.
 * Return: 0 always..
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	close(fd);
	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1)
	{
		free(buff);
		return (0);
	}
	if (wr != rd)
		return (0);
	return (rd);
}
