#include "lists.h"

/**
 * free_dlistint - frees a double list with only int data and no strings
 * @head: pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
