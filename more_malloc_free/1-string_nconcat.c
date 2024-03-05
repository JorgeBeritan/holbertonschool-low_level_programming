#include "main.h"
#include <stdlib.h>

char
*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, tlen, i, j;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len] != '\0')
	{
		len++;
	}

	tlen = len + n;
	result = malloc((tlen + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		result[i + j] = s2[j];
	}

	result[i + n] = '\0';
	return (result);

}
