#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last of number
 */

int print_last_digit(int n)
{
	while (n < 0)
	{
		_putchar('0' + (n % 10));
		n *= -1;
	}
	return (n % 10);
}
