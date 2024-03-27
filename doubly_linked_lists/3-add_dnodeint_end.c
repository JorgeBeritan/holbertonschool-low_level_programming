#include "lists.h"

dlistint_t
*add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *pointer = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	while (pointer->next != NULL)
		pointer = pointer->next;
	pointer->next = newnode;
	newnode->prev = pointer;

	return (*head);
}
