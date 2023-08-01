#include "lists.h"

/**
 * print_listint -Prints all elements of linked list.
 * @h: linked list of type listint_t,
 * Return: The no. of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
