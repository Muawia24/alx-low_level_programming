#include "main.h"
/**
 *  read_textfile -  reads a text file and prints it to
 *  the POSIX standard output.
 *  @filename: pointer to file
 *  @letters: count of letters to be read
 *  Return: the actual number of letters it could read
 *   and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, f_read, f_write;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	f_read = read(fd, buf, letters);
	if (fd == -1 || f_read == -1)
	{
		free(buf);
		return (0);
	}
	f_write = write(STDOUT_FILENO, buf, f_read);

	if (fd == -1 || f_write != f_read)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);
	return (f_read);

}
