#include "main.h"
/**
 * _strcmp - Write a function that compares two strings.
 *
 * @s1: This is the input string
 * @s2: This is the input string
 *
 * Return: If the strings are equals return "0", if not return other number
 */

int _strcmp(char *s1, char *s2)
{
	int i, count;

	for (i = 0; s1[i] != '\0' && s1[i] == s2[i]; i++)
	{
		count = s1[i] - s2[i];
	}
	return (count);
}
