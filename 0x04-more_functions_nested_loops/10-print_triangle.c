#include "main.h"

/**
 * print_triangle - Write a function that prints a triangle, followed by a new
 * line.
 * @size: demensions of triangle
 * Return: nothing
 **/

void print_triangle(int size)
{
		int i, j, size;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
				_putchar(' ');

			for ( j = 1; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
}
