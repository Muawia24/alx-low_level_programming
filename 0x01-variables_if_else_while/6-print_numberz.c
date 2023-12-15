#include <stdio.h>
/**
 *main -> prints nums 0 to 10 using putchar()
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);

	putchar('\n');
	return (0);
}
