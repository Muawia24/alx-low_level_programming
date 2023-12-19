#include "main.h"
/**
 * _islower - checking if character is lowercase or not
 *
 * Return: 0 or 1
 */

int _islower(int c)
/* check ascii*/
{
	if (c >= 97 && c == 122)
		return (1);
	else
		return (0);
}
