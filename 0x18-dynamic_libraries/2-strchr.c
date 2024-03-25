#include "main.h"
/**
 * _strchr - Function that locates a character in a string
 * @s: This is the input string
 * @c: This is the character
 * Return: Return to the character found, if not return a NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
