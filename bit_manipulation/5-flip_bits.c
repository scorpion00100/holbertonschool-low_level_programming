#include "main.h"

/**
 * flip_bits - return the number of bits nedeed to flip
 *		to get from one number to another
 * @n: the number to parse
 * @m: the number to parse
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value = n ^ m;
	int count = 0;

	while (value > 0)
	{
		count++;
		value = value & (value - 1);
	}
	return (count);

}
