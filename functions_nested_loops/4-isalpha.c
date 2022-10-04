#include "main.h"

/**
 * _isalpha - check lowecase and uppercase
 * @c: char to check
 * Return: 1 if lowercase or uppercase, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' || 'A') && (c <= 'z' || 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
