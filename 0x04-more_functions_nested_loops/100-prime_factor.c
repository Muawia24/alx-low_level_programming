#include <stdio.h>
#include <stdint.h>

/**
 * main - Write a program that finds and prints the largest prime factor
 *
 * number 612852475143, followed by a new line.
 *
 * Return: 0
 *
 **/
int main(void)
{
	int i, num;
	long int number = 612852475143;

	for (i = 2; i <= number; i++)
	{
		number = number / i;
		num = i;
	}
	printf("%d\n", num);
}
