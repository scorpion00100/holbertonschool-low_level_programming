#include "main.h"

/**
 * main- print lowercase char
 * @c: character that we check
 * Return: return 1 if c is lowercase and else return 0
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
