#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *k, *prev;

	if (!head)
		return (-1);
	k = *head;
	if (!k)
		return (-1);
	if (index)
	{
		prev = k;
		while (index-- && prev->next)
			prev = prev->next;
		if (index)
			return (-1);
		prev->next = k->next;

		if (prev->next)
			prev->next->prev = prev;
	}
	else
	{
		*head = k->next;

		if(*head)
			(*head)->prev = NULL;
	}
	free(k);

	return (1);
}
