#include "search_algos.h"
/**
 * binary_search_ - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: first element
 * @high: last element
 * @value: value to search for
 * Return: return the index where value is located or -1 if not present
 */
int binary_search_(int *array, size_t low, size_t high, int value)
{
	size_t i, mid;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
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
/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 * Return:  first index where value is located or -1 if not present
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, high;

	if (array == NULL)
		return (-1);
	while ((i < size) && (array[i] < value))
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);

		if (array[i] == value)
			return (i);

		i *= 2;
	}

	high = (i < size - 1 ? i : size - 1);
	printf("Value found between indexes [%d] and [%d]\n", (int)i / 2, (int)high);

	return (binary_search_(array, i / 2, high, value));

}
