#include "main.h"

/**
 * print_last_digit - entry point
 * @c: value
 *
 * Return: lastd
 */
int print_last_digit(int c)
{
	int lastd = c % 10;

	if (lastd < 0)
	{
		lastd = lastd * -1;
	}

	_putchar(lastd + '0');

	return (lastd);
}
