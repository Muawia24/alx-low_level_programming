#include "main.h"
/**
 *_strcat - Write a function that concatenates two strings.
 *
 *@dest: This is the output dest
 *@src: This is the input source
 *
 * Return: This return to dest, that concatenates two strings
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[i + j + 1] = src[i];
	}
	dest[i + j + 1] = '\0';
	return (dest);
}
