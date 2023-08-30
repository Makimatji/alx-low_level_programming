#include "lists.h"

/**
 * add_nodeint - adding a new node at the beginning of a linked list
 * @head: pointing to the first node in the list
 * @n: data to insert in the new node
 *
 * Return: pointing to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
