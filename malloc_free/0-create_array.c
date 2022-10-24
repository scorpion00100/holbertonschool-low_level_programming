#include <stdio.h>
#include <stdlib.h>
#include <main.h>

/**
 * create_array - create array of chars and initialize with a specific char
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *tab;

	if (size == 0)
		return (NULL);

	tab = malloc(sizeof(char) * size);

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < size ; i++)
	{
		*(tab + i) = c;
	}
	*(tab + i) = '\0';

	free(tab);

	return (tab);
}
