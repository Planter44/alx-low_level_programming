#include "lists.h"

/**
 * sum_listint -Calculating sum of data in listint_t list.
 * @head:1st node in linked list,
 * Return: Sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
