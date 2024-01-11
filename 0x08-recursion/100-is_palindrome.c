#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: int
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}

/**
 * compare_str - compare characters of the string
 * @s: string
 * @l: left side of string
 * @r: right side
 * Return: int
 */


int compare_str(char *s, int l, int r)
{
	if (*(s + l) == *(s + r))
	{
		if (l == r || l == r + 1)
		{
			return (1);
		}
		return (0 + compare_str(s, l + 1, r - 1));
	}
	return (0);
}
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: is the string
 * Return: return 1 if the string is a palindrome or 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (compare_str(s, 0, _strlen(s) - 1));
}
