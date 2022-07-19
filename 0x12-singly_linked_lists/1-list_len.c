#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to HEAD of the list
 *
 * Return: number of element in the list
 */

size_t list_len(const list_t *h)
{
	unsigned long count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
