#include "lists.h"

/**
 * pop_listint -Deletes head node of linked list.
 * @head:pointer to 1st elemenT,
 * Return:Data in elements or 0 if list is NULL.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
