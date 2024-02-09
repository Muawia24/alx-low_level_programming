#include "main.h"
/**
 * clear_bit - ets the value of a bit to 0 at a given index.
 * @n: number input
 * @index: index of bit to be cleard
 * Return: 1 if it worked, or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int clr;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	clr = 1 << index;
	*n = *n & ~clr;
	return (1);
}
