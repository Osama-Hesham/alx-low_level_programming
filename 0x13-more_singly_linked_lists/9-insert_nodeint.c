#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * insert_nodeint_at_index - insert node at index
 * @head: input
 * @idx: input
 * @n: input
 * Return: output
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int i = 0;
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL || head == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (i = 0; i < idx; i++)
	{
		if (i == idx - 1)
		{
			node->next = temp->next;
			temp->next = node;
			return (node);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
