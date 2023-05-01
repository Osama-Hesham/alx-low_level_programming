#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_listint - free list
 * @head: input
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
