#include "lists.h"

/**
 * list_len - prints length of this list
 * @h: linked list
 * Return: number of nodes/elements (length) in linked list
 */

size_t list_len(const list_t *h)
{
	size_t d = 0;

	while (h != NULL)
	{
		d++;
		h = h->next;
	}

	return (d);
}
