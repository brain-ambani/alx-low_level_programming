#include <stdio.h>


/**
 * print_list - prints the elements of a list list_t.
 * @h: singly linked list.
 * Return: elements of the list.
 *
 */
size_t print_list(const list_t *h)
{
	size_t element;

	element = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printtf("[%d] %s\n", h->len, h->str);
		h = h->next;

		element++;
	}
	return (element);
}