#include "main.h"
/**
 * binary_to_uint - converts binary to integer
 * @b: pointing to string of 0's & 1's
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		dec = 2 * dec + (b[j] - '0');
	}
	return (dec);
}
