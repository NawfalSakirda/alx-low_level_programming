#include "lists.h"

/**
 * free_list - frees a list
 *
 * @head: pointer list
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head != 0)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
