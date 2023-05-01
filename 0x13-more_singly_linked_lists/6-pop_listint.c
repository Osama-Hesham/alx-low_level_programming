#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * pop_listint - delete head node
 * @head: input
 * Return: output
 */
int pop_listint(listint_t **head)
{
	unsigned int i;
	listint_t *node;

	if (!head || !*head)
	{
		return (0);
	}
	i = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (i);
}
