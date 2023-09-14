#include "lists.h"

/**
  * free_dlistint - frees the list.
  * @head: header of list.
  * Return: NULL.
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *savepoin;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			savepoin = head->next;
			free(head);
			head = savepoin;
		}
	}
}
