#include "lists.h"

/**
 * add_nodeint_end -Adds node at end of linked list.
 * @head:The pointer to 1st element in list,
 * @n:Data to be inserted in the new element.
 * Return:The pointer to node or NULL incase of fail.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
