#include "search_algos.h"
/**
 * binary_search_rec - searches for a value in a sorted array
 * of integers using recursive the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: first element
 * @high: last element
 * @value: value to search for
 * Return: return the index where value is located or -1 if not present
 */
int binary_search_rec(int *array, size_t low, size_t high, int value)
{
	size_t i, mid;

	if (array == NULL)
		return (-1);

	if (low <= high)
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

		if (array[mid] == value && (value > array[mid - 1] || mid == low))
			return (mid);

		else if (array[mid] < value)
			return (binary_search_rec(array, mid + 1, high, value));

		else
			return (binary_search_rec(array, low, mid - 1, value));
	}
	return (-1);
}
/**
 * advanced_binary - searches for a value in a sorted array
 * of integers using the recursive binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 * Return:  first index where value is located or -1 if not present
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_rec(array, 0, size - 1, value));

}
