#include "lists.h"

dlistint_t
*add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (*head)
	{
		newnode->next = *head;
		newnode->prev = (*head)->prev;
		(*head)->prev = newnode;
		*head = newnode;
		return (*head);
	}

	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
	return (*head);
}
