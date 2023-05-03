#include "lists.h"

/**
 * add_nodeint - this function adds a new node,
 * at the beginning of a listint_t list
 * @head: input for the initial node
 * @n: info for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
