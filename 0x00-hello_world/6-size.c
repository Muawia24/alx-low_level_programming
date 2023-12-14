#include<stdio.h>
/**
 * main - prints sizes of diffarent data type
 * Return: 0 if nothing went wrong
 */
int main(void)
{
	char i;
	int j;
	long int a;
	long long int b;
	float c;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(c));

	return (0);
}
