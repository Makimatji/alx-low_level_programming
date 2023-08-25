#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the list that is linked
 * @head: list_t the list to be free
 */
void free_list(list_t *head)
{
    list_t *current = head;

    while (current != NULL)

    {
        list_t *temp = current;
        current = current->next;
        free(temp);
    }
}
