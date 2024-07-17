#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the index where value is located or -1 if not present
 */
int binary_search(int *array, size_t size, int value)
{
	int low, high, mid, i;

	low = 0;
	high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array:");
		for (i = low; i <= high; i++)
		{
			int num;

			num = array[i];
			printf("%d", num);
			if (i != high)
				printf(", ");
		}
		printf("\n");
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
