#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if not present
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	low = 0;
	high = size - 1;

	if (array == NULL)
		return (-1);

	while (size)
	{
		pos = low + (((double)(high - low) / (array[high] -
					array[low])) * (value - array[low]));

		printf("Value checked array[%ld] ", pos);

		if (pos >= size)
		{
			printf("is out of range\n");
			break;
		}
		else
			printf("= [%d]\n", array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

	}

	return (-1);
}
