#include "lists.h"

/**
 * free_listint2 - releases a linked list
 * @head: pointer to the listint_t list to release
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
