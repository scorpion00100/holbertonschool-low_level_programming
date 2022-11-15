#include "lists.h"

/**
 * print_list - prints all elements of the list
 * @h: linked list
 * Return: number of nodes who are in linked list
 */

size_t print_list(const list_t *h)
{
	size_t d = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		d++;
		h = h->next;
	}

	return (d);
}
