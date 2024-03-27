#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *pointer;
	unsigned int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{ 
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	new->len = len;
	new->str = strdup(str);
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = NULL;
		pointer = *head;
		while (pointer->next)
		{
			pointer = pointer->next;
		}
		pointer->next = new;
	}

	return (new);
}
