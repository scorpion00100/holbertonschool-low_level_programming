#include <stdlib.h>

/**
 * print_name - print a name
 * @name: the name to be print
 * @f: ptr to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
