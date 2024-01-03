#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, len, len1;

	len = strlen(str);
	len1 = len / 2;
	if (len1 % 2 != 0)
	{
		_putchar(str[len - 1]);
	}
	for (i = 0; i <= len - 1; i++)
	{
		if (i >= len1)
			_putchar(str[i]);
	}
	_putchar('\n')
}

