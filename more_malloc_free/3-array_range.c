#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: first int number
 * @max: last int number
 *
 * Return: ptr to new allaoc Mo
 */

int *array_range(int min, int max)
{
	int *ptr;
	int d;
	int b = (max - min + 1);

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
		return (NULL);

	for (d = 0; d < n; d++)
		ptr[i] = min++;

	return (ptr);
}
