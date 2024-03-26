#include "lists.h"
int _strlen(const char *);
list_t
*add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (head != NULL && str != NULL)
	{
		tmp = malloc(sizeof(list_t));
		if (tmp == NULL)
			return (NULL);

		tmp->str = strdup(str);
		tmp->len = _strlen(str);
		tmp->next = *head;

		*head = tmp;

		return (tmp);
	}
	return (0);
}
int
_strlen(const char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}

	return (i);
}
