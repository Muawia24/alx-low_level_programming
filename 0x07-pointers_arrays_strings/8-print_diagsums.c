#include "main.h"
/**
*print_diagsums -  a function that prints the sum of
* the two diagonals of a square matrix of integers.
*@a:matrix to be summed
*@size:size of the matrix
*/
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2, diagonal1, diagonal2;

	sum1 = 0;
	sum2 = 0;
	diagonal1 = 0;
	diagonal2 = size - 1;
	
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + diagonal1);
		sum2 += *(a + i * size + diagonal2);
		diagonal1 += 1;
		diagonal2 -= 1;
	}
	printf("%d, %d\n", sum1, sum2);

}
