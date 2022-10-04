#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: Always 0
 */

int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar('0' + (n % 10));
	}
	else if (n < 0)
	{
		_putchar(n *= -1 + '0' + (n % 10));
	}
	else
	{
		return (n % 10);
	}
	_putchar('\n');
	return (0);
}
