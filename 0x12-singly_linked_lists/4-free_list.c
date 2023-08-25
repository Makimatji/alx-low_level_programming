#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the list that is linked
 * @head: list_t the list to be free
 */
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
