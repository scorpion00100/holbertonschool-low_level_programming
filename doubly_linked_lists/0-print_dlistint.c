#include "lists.h"

/**
 * print_dlistint - Print all elements of a doubly linked list
 * @h: address of linked list
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; h = h->next, i++)
		printf("%d", h->n);
	return (1);
}
