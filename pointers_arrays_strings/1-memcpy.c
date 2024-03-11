#include "main.h"

char
*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *p = dest;
	char *p2 = src;

	for (i = 0; i < n; i++)
	{
		p[i] = p2[i];
	}
	return (dest);
}
