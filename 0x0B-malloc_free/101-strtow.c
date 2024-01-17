#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* free_grid - frees a 2d array
*@grid:memory block to be freed
*@height:height of the array
*Return:returns void
*/

void free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
			free(grid[height]);
		free(grid);
	}
}

/**
*strtow - splits a stirng into words
*@str: string to be splitted
*
*Return: pointer to the array of splitted words
*/

char **strtow(char *str)
{
	char **s;
	size_t i, j, k, height, a;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = height = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		height++;
	{
		s = malloc((height + 1) * sizeof(char *));
	}
		if (s == NULL || height == 0)
		{
			free(s);
			return (NULL);
		}
	for (j = a = 0; j < height; j++)
	{
		for (i = a; str[i] != '\0'; i++)
		{
			if (str[i] == ' ')
				a++;
			if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			{
				s[j] = malloc((i - a + 2) * sizeof(char));
				if (s[j] == NULL || height == 0)
				{
					free_grid(s, j);
					return (NULL);
				} break;
			}
		}
		for (k = 0; a <= i; a++, k++)
			s[j][k] = str[a];
		s[j][k] = '\0';
	}
	s[j] = NULL;
	return (s);
}
