#include "main.h"
/**
 * _islower - checking if character is lowercase or not
 * @c: character
 * Return: 0 or 1
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
