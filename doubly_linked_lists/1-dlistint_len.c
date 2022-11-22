#include "lists.h"

/**
 * dlistint_len - return the number of elements in a doubly linked list
 * @h: address of linked list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t d;

	for (d = 0; h; h = h->next, d++)
		continue;
	return (d);
}
