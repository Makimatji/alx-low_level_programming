#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adding a new node at the end of a linked list
 * @head: the list_t list's double pointer
 * @str: new node string
 *
 * Return: the new element' addres, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	nw = malloc(sizeof(list_t));
	if (!nw)
		return (NULL);

	nw->str = strdup(str);
	nw->len = len;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = nw;

	return (nw);
}
