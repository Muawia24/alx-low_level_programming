#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 *  in memory, which contains a copy of the string given as a parameter.
 *  @str: This is the input string
 *   Return: function returns a pointer to the duplicated string. It returns
 *   NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *str2;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	str2 = malloc((i + 1) * sizeof(char));

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		str2[j] = str[j];
	}

	return (str2);

}
