#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given idx
 * @head: pointer to head of double list
 * @index: index
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *clear = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	clear = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(clear);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	while ((index != 0) && (clear->next != NULL))
	{
		index -= 1;
		clear = clear->next;
	}
	if (index == 0)
	{
		clear->prev->next = clear->next;
		if (clear->next != NULL)
			clear->next->prev = clear->prev;
		free(clear);
		return (1);
	}
	return (-1);
}
