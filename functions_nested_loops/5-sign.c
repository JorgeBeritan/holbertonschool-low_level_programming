#include "main.h"

/**
 * print_sign - entry point
 * @c: entry variable
 *
 * Return: 0 always
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
