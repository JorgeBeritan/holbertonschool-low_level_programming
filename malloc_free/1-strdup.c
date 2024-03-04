#include "main.h"
#include <stdlib.h>

char
*_strdup(char *str)
{
	char *copy;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		j++;
	copy =  malloc(sizeof(char) * (j + 1));
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}
	copy[j] = '\0';
	return (copy);
}
