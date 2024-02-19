#include "main.h"
#include <ctype.h>

/**
 * int _islower(int c) - entry point
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
