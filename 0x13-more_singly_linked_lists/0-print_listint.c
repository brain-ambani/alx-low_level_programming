#include "lists.h"

/**
 * print_listint - prints all elements
 * of a list.
 * @h: head of the list.
 *
 * Return: the no. of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
