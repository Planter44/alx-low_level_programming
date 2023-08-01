#include "lists.h"

/**
 * free_listint -Freeing the linked list.
 * @head: listint_t the list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
