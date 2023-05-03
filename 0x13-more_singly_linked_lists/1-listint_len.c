#include "lists.h"

/**
 * listint_len - this function returns the number of elements,
 * in a linked listint_t list
 * @h: input listint_t list
 *
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
