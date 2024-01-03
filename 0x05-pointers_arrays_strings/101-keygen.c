#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chars[] = "asdfghjklmnbvcxzqwertyuiopASDFGHJKLMNBVCXZQWERTYUIOP";
	char pass[len + 1];

	srand(time(0));

