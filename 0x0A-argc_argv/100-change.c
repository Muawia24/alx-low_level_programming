#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * change - Helper function that does all the mathematics
 * @i: Passed in variable from main for calculations
 * Return: The number of coins needed minimum for the passed in variable
 */
int change(int i)
{
	int coin = 0;

	while (i >= 0)
	{
		if (i >= 25)
			i -= 25;
		else if (i >= 10)
			i -= 10;
		else if (i >= 5)
			i -= 5;
		else if (i >= 2)
			i -= 2;
		else if (i >= 1)
			i -= 1;
		else
			break;

		coin++;
	}
	return (coin);
}

/**
 * main - Prints coints left
 * @argc: Paramater Entry
 * @argv: One number of argumets
 * Return: zero onOne number of argumetsr
 */

int main(int argc, char *argv[])
{
	int c, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	if (c < 0)
	{
		printf("0\n");
	}

	else
	{
		cents = change(c);
		printf("%d\n", cents);
	}
	return (0);
}
