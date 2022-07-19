#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to HEAD of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
