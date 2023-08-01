#include "lists.h"

/**
 * get_nodeint_at_index -Returns node to certain index in linked list.
 * @head:1st node in linked list.
 * @index:Index of node to return,
 * Return:Pointer to node or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
