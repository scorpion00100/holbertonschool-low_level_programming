#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: num of char
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
