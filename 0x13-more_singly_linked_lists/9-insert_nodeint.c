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
	listint_t *node, *neo = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !neo)
		return (NULL);

	neo->n = n;
	neo->next = NULL;
	if (!idx)
	{
		neo->next = *head;
		*head = neo;
		return (neo);
	}
	neo = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			neo->next = node->next;
			node->next = neo;
			return (neo);
		}
		i++;
		node = node->next;
	}
	free(neo);
	return (NULL);
}
