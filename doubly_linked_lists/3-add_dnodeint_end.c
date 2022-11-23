#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of the list
 * @head: pointer to the first element
 * @n: the integer to add
 * Return: the address of the new element, NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	new->n = n;
	new->next = NULL;
	new->prev = tmp;
	tmp->next = new;

	return (new);
}
