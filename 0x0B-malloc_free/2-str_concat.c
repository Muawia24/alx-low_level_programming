#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer of newly allocated space of memory,
 * with the content of s1,s2 or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	concat = (char*) malloc((i + j ) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; i++)
		concat[k] = s1[k];

	for (k = 0; s2[k] != '\0'; j++)
		concat[k + i] = s2[k];

	return (concat);
}
