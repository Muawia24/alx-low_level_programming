#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: pointer to memory location
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	int i, k;

	k = new_size;
	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (s);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	if (new_size > old_size)
		k = old_size;

	for (i = 0; i < k; i++)
		*(s + i) = *((char *)ptr + i);

	free(ptr);
	return (s);
}
