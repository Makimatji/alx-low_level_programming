#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number elements number in linked list
 * @k: pointer to the list_t list
 *
 * Return: elements number in k
 */
size_t list_len(const list_t *k)
{
	size_t t = 0;

	while (k)
	{
		t++;
		k = k->next;
	}
	return (t);
}
