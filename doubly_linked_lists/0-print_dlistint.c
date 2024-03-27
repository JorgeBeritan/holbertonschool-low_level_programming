#include "lists.h"

size_t
print_dlistint(const dlistint_t *h)
{
	unsigned int j = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
