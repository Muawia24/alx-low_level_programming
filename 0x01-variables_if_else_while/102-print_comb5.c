#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 99; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 99; digit2++)
		{
			putchar(digit1 + '0' + '0');
			putchar(digit2 + '0' + '0');

			if (digit1 == 98 && digit2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
