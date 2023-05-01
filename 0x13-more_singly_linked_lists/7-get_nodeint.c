#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_nodeint_at_index - print node at index
 * @head: input
 * @index: input
 * Return: output
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	while (i < index && node)
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		return (node);
	}
}
