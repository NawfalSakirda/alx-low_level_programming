#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 *
 * @head: pointer to the first node
 * @n: integer to add in a new node
 *
 * Return: new node or NULL (fails)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
