#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - This calculates the values of two numbers
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0 if succesfful
 */

int main(int argc, char *argv[])
{
	int d, b;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	d = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(d, b));

	return (0);
}
