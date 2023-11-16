#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning
 * of a list.
 *
 * @head: A pointer to the head of the list.
 * @str: The string to be added to the list.
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	char *t;
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	t = node->str;
	for (i = 0; *t; i++)
		t++;

	node->len = i;
	node->next = *head;

	*head = node;

	return (node);
}
