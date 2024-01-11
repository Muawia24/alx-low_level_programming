#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check if n is a prime number
 * @resp:int
 * @n: int
 * @x: int
 * Return: 0 or 1
 */
int is_prime_number(int n, int x)
{
	if (((n > 1) && (x == n)) || (x == 2))
	{
		return (1);
	}
	else if (((n % x) == 0) || (n <= 1))
	{
		return (0);
	}
	return (is_prime_number(n, x + 1));
}
