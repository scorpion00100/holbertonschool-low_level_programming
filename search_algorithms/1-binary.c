#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted array of integers
 * @array: Array to search in
 * @size: Size of the array
 * @value: Value to search for
 * Return: Index where value is located,
 *	   If value is not present in array or NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, left, right;

	if (!array)
		return (-1);

	/**
	 * set the new limits of the splited array
	 * iterate until left and right meat each other
	 */
	for (left = 0, right = (int)size - 1; right >= left;)
	{
		/* print the array being searched every time it changes */
		printf("Search in array: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		/**
		 * set the middle point of the array
		 * make sure that the option below does not cause overflow
		 * explanation: https://bit.ly/3wzQp9i
		 */
		mid = left + (right - left) / 2;

		/* check if value is present at mid */
		if (array[mid] == value)
			return (mid);
		/* if value is smaller, ignore right half */
		if (array[mid] > value)
			right = mid - 1;
		/* if value is greater, ignore left half */
		else
			left = mid + 1;
	}
	return (-1);
}
