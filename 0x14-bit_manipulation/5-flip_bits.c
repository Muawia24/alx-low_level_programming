#include "main.h"
/**
 * flip_bits - returns the number of bits you would
 *  need to flip to get from one number to another.
 *  @n: number input
 *  @m: number input
 *  Return: count of bits to be modefied or -1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int lastBit1, lastBit2;

	while (n || m)
	{
		lastBit1 = n & 1;
		lastBit2 = m & 1;

		if (lastBit1 != lastBit2)
			i++;

		n = n >> 1;
		m = m >> 1;
	}
	return (i);
}
