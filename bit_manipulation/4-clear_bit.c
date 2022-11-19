#include "main.h"

/**
 * clear_bit - Set the value of a bit to 0 at a given index
 * @n: The number to modify, passed by reference
 * @index: The index, starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value = 0;

	if (index > 31)
		return (-1);

	value = 1 << index;
	*n = *n & ~(value);

	return (1);
}
