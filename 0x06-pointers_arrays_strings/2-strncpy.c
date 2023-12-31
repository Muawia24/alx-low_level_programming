#include "main.h"

/**
 * *_strncpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * @n: number of bytes
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; i < n && (src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
