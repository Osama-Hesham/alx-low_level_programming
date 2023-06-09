#include "lists.h"

/**
 * print_listint - print all the elements
 * @h: input
 * Return: output
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}

