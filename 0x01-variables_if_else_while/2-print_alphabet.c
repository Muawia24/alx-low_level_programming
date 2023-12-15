#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabet in lower case
 * Return: 0 if nothing went wrong
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);

}
