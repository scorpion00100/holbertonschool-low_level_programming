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
	va_list ap;
	unsigned int i;
	char *store;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		store = va_arg(ap, char *);

		if (store == NULL)
			printf("(nil)");
		else
			printf("%s", store);

		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
