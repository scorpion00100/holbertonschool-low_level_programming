#include <stddef.h>

/**
 * int_index - a func that check an integ
 * @array: an integ array of size
 * @size: the size of array
 * @cmp: compare func to be used
 * Return: -1 on error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
