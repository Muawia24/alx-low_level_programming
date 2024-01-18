#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of locations
 * @size: size of memory
 * Return: a pointer to the allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;

	if (size == 0 || nmemb == 0)
		return (NULL);
	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);
	return (s);
}
