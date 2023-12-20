#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	float sumeven = 0;

	for (count = 0; count < 50; count++)
	{

		sum = fib1 + fib2;
		if (sum > 400000)
			break;
		if ((sum % 2) == 0)
			sumeven += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", sumeven);
	return (0);
}
