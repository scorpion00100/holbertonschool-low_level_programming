#include "search_algos.h"

/**
 * linear_search - search for a value in an array of integers
 * @array: array to search in
 * @size: size of the array
 * @value: Value to search for
 * Return: 1st index where value is located,
 *         if value is not present in array or NULL, return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
