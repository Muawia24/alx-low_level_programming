#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9, followed by a new line
 *
 *
 * Return: is zero
 */
void print_numbers(void)
{
	char num;

	num = '0';
	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');

}
