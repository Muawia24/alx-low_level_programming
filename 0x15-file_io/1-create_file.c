#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	if (s == NULL)
		return (0);

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * create_file - creates a file.
 * @filename: file name
 * @text_content: null terminated string
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, w;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);
	w = write(file, text_content, _strlen(text_content));
	if (w == -1)
		return (-1);

	close(file);
	return (1);
}
