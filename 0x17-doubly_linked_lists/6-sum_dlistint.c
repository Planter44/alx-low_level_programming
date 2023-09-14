#include "lists.h"

/*
 * sum_dlistint - sum of dlistint_t list.
 * @head: header of list.
 * Return: sum of nodes.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *headcopy;
	int sum = 0;
	headcopy = head;
	if (headcopy != NULL)
	{
		while (headcopy->prev != NULL)
			headcopy = headcopy->prev;
		while (headcopy != NULL)
		{
			sum += headcopy->n;
			headcopy = headcopy->next;
		}
		return (sum);
	}
	else
		return (0);
}
