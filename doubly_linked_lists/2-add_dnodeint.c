#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the begin of the list
 * @head: pointer to the first element
 * @n: the integer to add
 * Return: the address of the new element, NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head != NULL)
	{
		while ((*head)->prev != NULL)
			*head = (*head)->prev;
		(*head)->prev = new;
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
