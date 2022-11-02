#include <stddef.h>

/**
 * array_iterator - exec an array wiht func ptr
 * @array: array contain func
 * @size: size of array
 * @action: ptr to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
