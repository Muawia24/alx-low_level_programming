#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337
 *
 * @str: This is the input string
 *
 * Return: String converted to 1337
 */

char *leet(char *str)
{
	int i, j;
	char lett[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char upp[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char num[] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == lett[j] || str[i] == upp[j])
			{
				str[i] = num[j];
			}
		}
	}
	return (str);
}
