#include "main.h"

/**
 * print_line - Entry point
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
