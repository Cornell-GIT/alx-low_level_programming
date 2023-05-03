#include "lists.h"

/**
 * free_listint2 - this function frees a listint_t list,
 * by setting head to NULL
 * @head: pointer to the listint_t list for this function
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
