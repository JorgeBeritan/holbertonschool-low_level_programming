#include "main.h"

int
set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);
	for (i = 1; index > 0; index--, i *= 2)
		;
	*n += i;

	return (1);
}
