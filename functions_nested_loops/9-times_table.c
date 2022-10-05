#include "main.h"

/**
 * times_table - print table of multiplication
 */

void times_table(void)
{
	int l;
	int c;
	int p;

	for (l = 0; l <= 9; l++)
	{
		for (c = 0; c <= 9; c++)
		{
			p = (l * c);

			if (c == 0)
			{
				_putchar('0' + p);
			}
			else if (p <= 9)
			{
				_putchar('.');
				_putchar(' ');
				_putchar(' ');
				-putchar('0' + p);
			}
			else
			{
				_putchar('0' + (p / 10));
				_putchar('0' + (p % 10));
			}
		}
		_putchar('\n');
	}
}
