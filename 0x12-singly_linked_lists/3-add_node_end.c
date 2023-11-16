#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list
 *
 * @head: a pointer to the head of the list
 * @str: The string to be added to the list
 *
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *n_node;
	size_t i;
	char *t;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}

	t = n_node->str;
	for (i = 0; *t; i++)
		t++;
	n_node->len = i;

	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}

	for (node = *head; node->next; node = node->next)
		;
	node->next = n_node;

	return (n_node);
}
