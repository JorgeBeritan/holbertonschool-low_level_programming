#include "main.h"

/**
 * print_numbers - entry point
 *
 * Return: void
 */
void more_numbers(void)
{
	int a, i;
	i = 0;

	while(i < 10)
	{
		for (a = 48; a < 58; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		i++;
	}
}
