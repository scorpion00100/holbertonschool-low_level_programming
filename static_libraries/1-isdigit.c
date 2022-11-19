#include "main.h"

/**
 * _isdigit - print function that check for a digit (0__9)
 * @c: check char
 * Return: 1 if c is a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

