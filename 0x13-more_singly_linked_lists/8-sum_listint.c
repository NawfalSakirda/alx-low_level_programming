#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 *
 * @head: ptr to the first node
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
