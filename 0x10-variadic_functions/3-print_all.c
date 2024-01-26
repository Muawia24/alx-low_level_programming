#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i, check;
	va_list all;
	char *str;

	va_start(all, format);
	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(all, int));
				check = 1;
				break;
			case 'i':
				printf("%d", va_arg(all, int));
				check = 1;
				break;
			case 'f':
				printf("%f", va_arg(all, double));
				check = 1;
				break;
			case 's':
				str = va_arg(all, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				check = 1;
				break;
			default:
				check = 0;
				break;
		}
		if (format[i + 1] != '\0' && check == 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
