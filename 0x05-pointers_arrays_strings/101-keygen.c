#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass, i;

	srand(time(NULL));
	i = 0;
	while (i < 2645)
	{
		pass = rand() % 78;
		i += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 - i);
	return(0);
}

