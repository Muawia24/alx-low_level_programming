#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - a function that creates an array of chars,
 *  and initializes it with a specific char.
 *  @size: size of array
 *  @c:character that will fill the array
 *  Return: NULL if size = 0, a pointer to the array,
 *   or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size < 1)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);

}
