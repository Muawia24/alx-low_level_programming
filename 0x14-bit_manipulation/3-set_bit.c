#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: input number
 * @index: index of bit to be modified
 * Return: 1 if it worked, or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
