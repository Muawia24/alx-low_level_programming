#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer to a 2 dimensional array of
 *                integers.
 *
 * @width: This is the columns of the array
 * @height: This is the rows of the array
 *
 * Return: Returns a pointer to a 2 dimensional array of integers.
 *         The function should return NULL on failure
 *         If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grd;

	if (width <= 0 || height <= 0)
		return (NULL);

	grd = malloc(sizeof(int) * height);

	if (grd == NULL)
	{
		free(grd);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grd[i] = malloc(sizeof(int) * width);

		if (grd[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grd[i][j] = 0;
		}
	}

	return (grd);
}
