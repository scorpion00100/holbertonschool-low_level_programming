#include "main.h"

/**
 * more_numbers - print 10 times the num from 0 to 14
 */

void more_numbers(void)
{
	char n;
	int c;

	for (c = 1; c <= 10; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n / 10 > 0)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
