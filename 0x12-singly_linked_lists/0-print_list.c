#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - printsa all elements of a singly linked list
 * @h: pointer to head of the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned long count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
