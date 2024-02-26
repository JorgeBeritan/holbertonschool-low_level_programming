#include "main.h"

char *_strcat(char *dest, char *src)
{
	char *p;
	char *q;

	for (q = dest; *q != '\0'; q++)
	;
	for (p = src; *p != '\0'; p++, q++)
	{
		*q = *p;
	}
	*q = '\0';
	return (dest);
}
