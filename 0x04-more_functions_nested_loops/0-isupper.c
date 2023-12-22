#include "main.h"

/**
 * _isupper - check the code.
 *@c: initial value
 * Return: Always 0.
 */
int _isupper(int c)
{
	c = 'a';
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
