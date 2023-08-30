#include "lists.h"

/**
 * print_listint - prints the elements of a linked list
 * @h: to print the linked list of type listint_t
 *
 * Return: number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
