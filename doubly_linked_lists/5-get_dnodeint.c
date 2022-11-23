#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 *
 * @head: head of the list
 * @index: nth node to get
 *
 * Return: Pointer to the nth node
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t d;

	for (d = 0; head != NULL; head = head->next, d++)
	{
		if (d == index)
			return (head);
	}

	return (NULL);
}
