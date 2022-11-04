#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print varying amount of strings
 * @separator: delimiter
 * @n: amount of arguments in list
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list db;
	unsigned int d;
	char *s;

	if (n > 0)
	{
		va_start(db, n);
		for (d = 1; d <= n; d++)
		{
			va_arg(db, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);

			if (d != s && separator != NULL)
				printf("%s", separator);
		}
		va_end(db);
	}
	printf("\n");
}
