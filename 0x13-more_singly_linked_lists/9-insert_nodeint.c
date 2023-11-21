#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: ptr to the first node of the list
 * @idx: index of the list where the new node is to be added
 * @n: int
 *
 * Return: ptr to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *neo;
	unsigned int i;

	node = *head;
	neo = malloc(sizeof(listint_t));
	if (neo == 0)
		return (0);

	neo->n = n;
	if (idx == 0)
	{
		neo->next = *head;
		*head = neo;
		return (neo);
	}
	i = 0;
	while (*head != 0 && i < idx - 1)
	{
		node = node->next;
		i++;
	}
	if (node == 0)
	{
		free(neo);
		return (0);
	}

	neo->next = node->next;
	node->next = neo;

	return (neo);
}
