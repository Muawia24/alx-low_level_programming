#include "main.h"

/**
 * main - writes the character of _putchar to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	char wrd[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(wrd[i]);
	}
	_putchar('\n');
	return (0);
}
