#include "main.h"
/**
 * _strncat - Write a function that concatenates two strings. it will use at
 *            most n bytes from src
 *
 * @dest: This is the output  dest
 * @src: This is the input src
 * @n: This is the number bytes fro src
 *
 * Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i + j + 1] = src[i];
	}
	dest[i + j + 1] = '\0';
	return (dest);
}
