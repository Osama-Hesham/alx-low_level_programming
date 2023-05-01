#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint - add node
 * @head: input
 * @n: input
 * Return: output
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Node = malloc(sizeof(listint_t));

	if (!Node)
	{
		return (NULL);
	}
	else
	{
		Node->n = n;
		Node->next = *head;
		*head = Node;
		return (Node);
	}
}
