#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, len, mid;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		mid = len / 2;
		for (i = 0; i < len; i++)
		{

			_putchar(str[i]);
		}
	}
	else
	{
		mid = (len - 1) / 2;

		for (i = mid + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

