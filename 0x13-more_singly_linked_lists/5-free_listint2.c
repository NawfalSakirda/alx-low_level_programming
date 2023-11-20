#include "lists.h"

/**
 * free_listint2 - frees list and sets head to NULL
 *
 * @head: pointer to the first node of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}