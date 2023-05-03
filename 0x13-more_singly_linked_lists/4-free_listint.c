#include "lists.h"

/**
 * free_listint - this function frees a listint_t list
 * @head: listint_t list for the function
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
