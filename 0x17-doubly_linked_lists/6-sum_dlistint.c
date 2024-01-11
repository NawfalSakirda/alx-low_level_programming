#include "lists.h"

/**
 * sum_dlistint - sums the value of dlist
 * @head: current head node pointer
 *
 * Return: int sum of values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
