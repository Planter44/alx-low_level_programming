#include "lists.h"

/**
 * add_nodeint -Adds new node at beginning of linked list.
 * @head: pointer to 1st node in the list,
 * Return:The pointer to new node or NULL incase of a fail.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
