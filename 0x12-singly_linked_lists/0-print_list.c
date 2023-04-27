#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - return linked list
 * @h: input
 * Return: output
 */
size_t print_list(const list_t *h)
{
	 size_t list = 0;

	 while (h)
	 {
		  if (!h->str)
		  {
			   printf("[0] (nil)\n");
		  }
		  else
		  {
			  printf("[%u] %s\n", h->len, h->str);
		  }
		  h = h->next;
		  list++;
	 }
	 return (list);
}
