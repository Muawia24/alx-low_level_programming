#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{

	char lower;

	lower = 'a';
	while (lower <= 'z')
	{
		if (lower == 'q' || lower == 'e')
		{
			lower++;
		}
		else
		{
			putchar(lower);
			lower++;
		}
	}

	putchar('\n');

	return (0);
}
