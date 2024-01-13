#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program.
 * @argc: number of program argument
 * @argv: pointer to program argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
