#include "lists.h"

/**
 * free_listint2 - frees list and sets head to NULL
 *
 * @head: pointer to the first node of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *h;

	if (!head)
		return;

	h = *head;
	while (h)
	{
		temp = h;
		h = h->next;
		free(temp);
	}
	*head = NULL;
}
