#include "lists.h"

/**
 * free_listint - releases a linked list
 * @head: listint_t list to be released
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
