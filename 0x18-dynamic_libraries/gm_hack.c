#include <unistd.h>
#include <string.h>
#include <stdio.h>

int rand(void)
{
	static int n = -1;

	n++;
	if (n == 0)
		return (8);
	if (n == 1)
		return (8);
	if (n == 2)
		return (9);
	if (n == 3)
		return (10);
	if (n == 4)
		return (23);
	if (n == 5)
		return (74);

	return (n * n % 30000);
}
