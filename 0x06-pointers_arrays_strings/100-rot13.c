#include "main.h"
/**
 * rot13 - Write a function that encodes a string using rot13
 *
 * @rot13: This is my input string
 *
 * Return: String converted to rot13
 *
 */

char *rot13(char *rot13)
{
	int i, j;
	char lett[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char sub[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; j != '\0'; j++)
		{
			if (rot13[i] == lett[j])
			{
				rot13[i] == sub[j];
			}
		}
	}
	return (rot13);
}
