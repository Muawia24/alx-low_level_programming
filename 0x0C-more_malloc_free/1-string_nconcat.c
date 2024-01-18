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
	unsigned int i, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;

	c = malloc(sizeof(char) * (n + i));

	if (c == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		c[k] = s1[k];

	for (l = 0; l <= n; l++)
	{
		c[k] = s2[l];
		k++;
	}
	return (c);
}
