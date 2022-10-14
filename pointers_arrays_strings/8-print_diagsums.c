#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{

	int sum_1 = 0;
	int sum_2 = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		sum_1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		sum_2 += a[i];
	}

	printf("%d, %d\n", sum_1, sum_2);

}
