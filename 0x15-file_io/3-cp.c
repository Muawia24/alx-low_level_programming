#include "main.h"
/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int cls;

	cls = close(fd);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int ffrom, fto, fread = 1024, fwrite;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	ffrom = open(argv[1], O_RDONLY);
	fto = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	while (fread == 1024)
	{
	fread = read(ffrom, buf, 1024);

	if (ffrom == -1 || fread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		free(buf);
		exit(98);
	}

	fwrite = write(fto, buf, fread);

	if (fto == -1 || fwrite == -1 || fwrite < fread)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buf);
		exit(99);
	}
	}
	free(buf);
	close_file(ffrom);
	close_file(fto);
	return (0);
}
