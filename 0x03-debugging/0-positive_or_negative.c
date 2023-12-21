#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - knoing numbers wheather its positive or not
 * Return: 0 always
 */
void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (i > 0)
		printf("%d is positive\n", i);

	else if (i == 0)
		printf("%d is zero\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);

}
