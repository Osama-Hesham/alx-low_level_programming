#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sum_listint - sum all elements in list
 * @head: input
 * Return: output
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	unsigned int sum = 0;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
