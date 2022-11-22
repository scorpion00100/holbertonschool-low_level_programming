#include "lists.h"

/**
 * print_dlistint - Print all elements of a doubly linked list
 * @h: address of linked list
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t d;

	for (d = 0; h!= NULL; h = h->next, d++)
		printf("%d\n", h->n);
	return (d);
}
