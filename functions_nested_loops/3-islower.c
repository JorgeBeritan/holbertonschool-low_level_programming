#include "main.h"
#include <ctype.h>

/**
 * _islower - lowercase
 * @c: variable que mide
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
