#include <stdlib.h>
#include "lists.h"

/**
 * list_len - list size
 * @h: input
 * Return: output
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
