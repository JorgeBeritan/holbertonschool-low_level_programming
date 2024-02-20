#include "main.h"
#include <stdio.h>

void
print_square(int size)
{
	int j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (k = 0; k < size; k++)
	{
		if (size > 0)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		}
			_putchar('\n');
		}
}
