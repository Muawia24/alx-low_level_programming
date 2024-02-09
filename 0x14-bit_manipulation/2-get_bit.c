#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: number input
 * @index: index of bit
 * Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	bit = n >> index;
	if (bit & 1)
		return (1);
	return (0);
}
