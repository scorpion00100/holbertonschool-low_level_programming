#include "main.h"

/**
 *print_sign - print sign of number
 *  @n: number to check
 * Return: 1 and print + if n > 0, 0 if n = zero and -1 (and print -) if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}