#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (j == 9)
			{
				_putchar(k);
			}
			else
			{
				_putchar(k);
				_putchar(',');
				_Putchar(' ');
			}
		}
		_putchar('\n');
	}
