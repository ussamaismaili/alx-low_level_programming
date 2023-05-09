#include "main.h"

#define BUFFER_SIZE 1024
/**
 * close_w - the close function.
 * @fdread: read perm.
 * @fdwrite: write perm.
 */
void close_w(int fdread, int fdwrite)
{
	if (close(fdwrite) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdwrite);
		exit(100); }
	if (close(fdread) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdread);
		exit(100); }
}

/**
 * main - A function that copies the content of a file to another file.
 * @argc: The argument of count.
 * @argv: THE argument of array.
 * Return: exit_success otherwise exit error 97, 98, 99, 100.
 */
int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	char *f_from, *f_to;
	int fd_read, fd_write;
	ssize_t rd = 1024, wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from f_to\n");
		exit(97); }
	f_from = argv[1];
	f_to = argv[2];
	fd_read = open(f_from, O_RDONLY);
	if (fd_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
		exit(98); }
	fd_write = open(f_to, O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0664);
	if (fd_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
		exit(99); }
	while (rd == BUFFER_SIZE)
	{
		rd = read(fd_read, buffer, BUFFER_SIZE);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
			exit(98); }
		wr = write(fd_write, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
			exit(99); }}
	close_w(fd_read, fd_write);
	return (0);
}
