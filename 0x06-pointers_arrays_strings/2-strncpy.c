#include "main.h"

/**
 * *_strncpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;


	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i - n];
	}
	dest[i] = '\0';
	return (dest);
}
