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
	int i = 0, j = 0, k, l;

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

	concat = malloc(sizeof(char) * (i + j + 1));

	if (concat == NULL)
		return (NULL);

	for (k = 0; k < i; i++)
		concat[k] = s1[k];

	for (l = 0; l <= j; j++)
	{
		concat[k] = s2[l];
		k++;
	}

	return (concat);
}
