#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the popped node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *node;

	if (head == NULL || *head == NULL)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;

	return (n);
}
