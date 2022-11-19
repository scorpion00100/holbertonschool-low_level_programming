#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: number to parse
 * @index: index, start to 0
  * Return: value of the bit at index index or -1 if failled
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int index_bit;

	if (index > 31)
		return (-1);

	index_bit = ((n >> index) & 1);

	return (index_bit);
}
