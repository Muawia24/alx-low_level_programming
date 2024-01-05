#include "main.h"
/**
 * rot13 - Write a function that encodes a string using rot13
 *
 * @rot13: This is my input string
 *
 * Return: String converted to rot13
 *
 */

char *rot13(char *rot)
{
	int i, j;
	char lett[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char sub[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; rot[i] != '\0'; i++)
	{
		for (j = 0; lett[j] != '\0'; j++)
		{
			if (rot[i] == lett[j])
			{
				rot[i] == sub[j];
			}
		}
	}
	return (rot);
}
