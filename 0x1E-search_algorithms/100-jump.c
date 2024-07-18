#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return:  first index where value is located or -1 if not present
 */
int jump_search(int *array, size_t size, int value)
{
	int step, low, high, len = (int)size, i = 0;

	if (array == NULL)
		return (-1);

	step = (int)sqrt(len);
	low = 0;
	high = step;

	if (array[high] >= value)
                printf("Value checked array[%d] = [%d]\n", low, array[low]);
	while (high < len && array[high] < value)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);

		i++;
		low = high;
		high = high + step;
	}
	if (high > len)
		printf("Value checked array[%d] = [%d]\n", low, array[low]);

	printf("Value found between indexes [%d] and [%d]\n", low, high);

	while (low <= high && low < len)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		low = low + 1;
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
