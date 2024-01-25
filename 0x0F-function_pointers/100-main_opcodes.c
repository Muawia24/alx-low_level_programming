#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcode - prints operation code
 * @x: address of main function
 * @n: number of bytes to print
 * Return: nothing
 */
void print_opcode(char *x, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", x[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - prints the opcode of its own
 * @argc: number of aguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int byte;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcode((char *)&main, byte);
	return (0);

}
