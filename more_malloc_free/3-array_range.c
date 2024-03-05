#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *p;
	int i, j = 0;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*p) * ((max - min) + 1));

	if (p != NULL)
	{
		for (i = min; i <= max; i++)
		{
			p[j] = i;
			j++;
		}
		return (p);
	}
	else
	{
		return (NULL);
	}
}
