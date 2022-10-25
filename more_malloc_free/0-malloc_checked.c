#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - alloc Mo
 * @b: size to malloc
 * Return: ptr to alloc Mo
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
