#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - append element to the list
 * @head: input
 * @str: input
 * Return: output
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list = malloc(sizeof(list_t));
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	if (!list)
	{
		return (NULL);
	}

	list->str = strdup(str);
	list->len = len;
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (list);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = list;
	return (list);
}
