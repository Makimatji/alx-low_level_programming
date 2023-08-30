#include "lists.h"

/**
 * get_nodeint_at_index - returns the node in a liked list at a certain index
 * @head: the first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *tmp = head;

	while (tmp && k < index)
	{
		tmp = tmp->next;
		k++;
	}

	return (tmp ? tmp : NULL);
}
