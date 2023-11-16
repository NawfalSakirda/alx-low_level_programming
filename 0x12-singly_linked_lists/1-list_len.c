#include "lists.h"

/**
 * list_len - returns the number of elements in a linked lists
 *
 * @h: linked list of type list_t
 *
 * Return: number of elements in a list_t  linked list
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;

	return (i);
}
