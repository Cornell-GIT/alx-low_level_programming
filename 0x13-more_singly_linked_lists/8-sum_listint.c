#include "lists.h"

/**
 * sum_listint - this function outputs the sum of all the data (n),
 * of a listint_t linked list
 * @head: initial node in the listint_t linked list
 *
 * Return: the sum of all the data, else 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sumofdata = 0;
	listint_t *temp = head;

	while (temp)
	{
		sumofdata += temp->n;
		temp = temp->next;
	}

	return (sumofdata);
}
