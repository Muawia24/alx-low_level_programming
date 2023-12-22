#include "main.h"
/**
 * print_square - Function that prints a square, followed by a new line.
 *
 * @size: Entry
 *
 *
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
