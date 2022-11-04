#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print  numb
 * @separator: delimit
 * @n: amount arguments in list
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list db;
	unsigned int d;

	if (n > 0)
	{
		va_start(db, n);
		for (d = 1; d <= n; d++)
		{
			printf("%d", va_arg(db, int));

			if (d != n && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(db);
	}
	printf("\n");
}
