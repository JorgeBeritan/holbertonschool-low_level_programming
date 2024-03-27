#include "lists.h"

void
free_dlistint(dlistint_t *head)
{
	dlistint_t *next = NULL;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
