#include "lists.h"

/**
 * add_node - add a new node at the beginning of this list
 * @head: pointer to head in main func
 * @str: string to be duplicated
 * Return: address for new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	new->next = *head;
	*head = new;

	return (new);

}
