#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * reverse_listint - reverse list
 * @head: input
 * Return:  output
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node1 = NULL;
	listint_t *node2 = NULL;

	while (*head)
	{
		node2 = (*head)->next;
		(*head)->next = node1;
		node1 = *head;
		*head = node2;
	}

	*head = node1;
	return (*head);
}
