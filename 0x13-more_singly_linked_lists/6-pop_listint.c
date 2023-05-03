#include "lists.h"

/**
 * pop_listint - this function deletes the head node of a listint_t list,
 * and returns the head node’s data (n)
 * @head: pointer to the listint_t list for this function
 *
 * Return: the head node's data (n), else 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node;

	if (!head || !*head)
		return (0);

	node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (node);
}
