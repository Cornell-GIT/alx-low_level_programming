#include "lists.h"

/**
 * get_nodeint_at_index - this function returns the nth node of listint_t list
 * @head: initial node in the list
 * @index: index of the node for this function, starting at 0
 *
 * Return: nth node, else NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}

	return (temp ? temp : NULL);
}
