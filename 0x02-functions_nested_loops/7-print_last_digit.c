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
	dgt = n % 10;
	_putchar(dgt + '0');
	return (dgt);
}
