#include "main.h"
/**
 * _isalpha -  checks for alphabetic character
 * * @c: This is the entry
 * Return: 1 if letter 0 otherwise
 */

int _isalpha(int c)
{
	/* c to be checked*/
	if (isalpha(c) == 1)
	{
		/* if its true*/
		return (1);
	}
	else
	{
		/* return 0 otherwise*/
		return (0);
	}
}
