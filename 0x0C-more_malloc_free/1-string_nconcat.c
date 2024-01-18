#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer of newly allocated space of memory,
 * with the content of s1,s2 or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i, j, k, l;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++);
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j] != '\0'; j++);
	}
	if ( j > n)
		j = n;

	c = malloc(sizeof(char) * (j + i + 1));

	if (c == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		c[k] = s1[k];

	for (l = 0; l < j; l++)
	{
		c[k] = s2[l];
		k++;
	}
	return (c);
}
