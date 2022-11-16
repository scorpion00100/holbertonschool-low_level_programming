#include "lists.h"

/**
 * print_listint - prints  the elements of a  list.
 * @h: Address of the head of the list.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t b;

	for (b = 0; h; i++, h = h->next)
		printf("%d\n", h->n);
	return (b);
}
