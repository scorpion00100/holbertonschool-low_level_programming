#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: bit address passed by reference
 * @index: index, starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value = 0;

	if (index > 31)
		return (-1);

	value = 1 << index;
	*n = *n | value;

	return (1);
}
