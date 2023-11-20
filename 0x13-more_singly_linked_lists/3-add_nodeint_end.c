#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the node
 *
 * @head: pointer to the first node of the list
 * @n: int to add to the new node
 *
 * Return: new node or NULL (fails)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail, *p;

	tail = malloc(sizeof(listint_t));
	if (tail == NULL)
		return (NULL);
	tail->n = n;
	tail->next = NULL;

	if (*head == NULL)
	{
		*head = tail;
		return (tail);
	}

	p = *head;
		while (p->next != 0)
		{
			p = p->next;
		}
		p->next = tail;

	return (tail);
}
