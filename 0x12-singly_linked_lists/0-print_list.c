#include "lists.h"

/**
 * print_list - prints the elements of a list list_t.
 * @h: singly linked list.
 * Return: elements of the list.
 *
 */
size_t print_list(const list_t *h)
{
	size_t nelement;

	nelement = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;

		nelement++;
	}
	return (nelement);
}
