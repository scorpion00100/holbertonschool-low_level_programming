#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new_node node at a given position
 * @h: head of the list
 * @idx: position where insert the new_node node
 * @n: Value of the node
 * Return: Pointer to the new_node node
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlinst_t *new, *cur;
	unsigned int d;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	cur = *h;
	for (d = 0; cur && d < idx; d++)
		cur = cur->next;

	if (!cur && d == idx)
		return (add_dnodeint_end(h, n));
	else if (cur)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		cur->prev->next = new;
		new->prev = cur->prev;
		cur->prev = new;
		new->next = cur;
		return (new);
	}
	return (NULL);
}
