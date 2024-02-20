#include "main.h"

/**
 * more_numbers - entry point
 *
 * Return: void
 */
void more_numbers(void)
{
	int a, i;

	i = 0;

	while (i < 10)
	{
		for (a = 0; a < 15; a++)
		{
			if (a >= 10)
			{
				_putchar('0' + a / 10);
			}
			_putchar('0' + a % 10);
		}
		_putchar('\n');
		i++;
	}
}
