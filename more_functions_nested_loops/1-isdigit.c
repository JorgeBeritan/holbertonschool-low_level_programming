#include "main.h"

/**
 * _isdigit - entry point
 * @c: value
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
