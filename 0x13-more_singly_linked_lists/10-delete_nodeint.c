#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 *
 * @head: pointer to the first node of the list
 * @index: index of the list where the node is to be deleted
 *
 * Return: 1 if success, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *neo;
	unsigned int i;

	node = *head;
	neo = *head;

	if (*head == 0)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(neo);
		return (1);
	}

	i = 0;
	while (neo != 0 && i < index)
	{
		node = neo;
		neo = neo->next;
		i++;
	}
	if (neo == 0)
		return (-1);

	node->next = neo->next;
	free(neo);
	neo = 0;

	return (1);
}
