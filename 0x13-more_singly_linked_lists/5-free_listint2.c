#include "lists.h"

/**
 * free_listint2 -Freeing the linked list.
 * @head:The pointer to the listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
