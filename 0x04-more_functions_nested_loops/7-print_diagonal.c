#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n: this is the size of the diagonal
 *
 * Return: There is no error
 **/

void print_diagonal(int n)
{
	while(n > 0)
	{
		_putchar(' ');
		n--;
	}
	_putchar('\');
	_putchar('\n');
}
