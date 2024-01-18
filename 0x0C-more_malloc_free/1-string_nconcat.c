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
	char *concat;
	unsigned int i, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;

	concat = malloc(sizeof(char) * (n + i + 1));

	if (concat == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		concat[k] = s1[k];

	for (l = 0; l <= n; l++)
	{
		concat[k] = s2[l];
		k++;
	}
	return (concat);
}
