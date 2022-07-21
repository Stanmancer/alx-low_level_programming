#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns the number of elements of a linked listint_t list
 * @h: pointer to HEAD of the list
 *
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
