#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: entry point
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int dgt = n % 10;

	if (dgt < 0)
	{
		dgt *= -1;
	}

	_putchar(dgt + '0');
	return (dgt);
}
