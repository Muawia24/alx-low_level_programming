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
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
