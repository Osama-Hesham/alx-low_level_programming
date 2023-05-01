#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * delete_nodeint_at_index - delete node from list
 * @head: input
 * @index: input
 * Return: output
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = NULL;
	listint_t *temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	if (*head == NULL)
	{
		return (-1);
	}
	while (i < index - 1)
	{
		if (temp == NULL)
		{
			return (-1);
		}
		temp = temp->next;
		i++;
	}
	node = temp->next;
	temp->next = node->next;
	free(node);
	return (1);
}
