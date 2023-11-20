#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: pointer to the first node of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != 0)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
