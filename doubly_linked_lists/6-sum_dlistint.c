#include "lists.h"

/**
 * sum_dlistint - Sum of all the data (n) of a dlistint_t linked list
 *
 * @head: Head of the list
 *
 * Return: Sum of all the nodes value
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
