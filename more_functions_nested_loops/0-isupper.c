#include "main.h"

/**
 *_isupper - entry point
 *@c: entrry value
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
