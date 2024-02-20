#include "main.h"

void print_triangle(int size)
{
	int b, c, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (b = 1; b <= size ; b++)
		{
			_putchar('\n');
			for (c = size - b; c > 0; c--)
			{
				_putchar(' ');
			}
			for (d = 0; d < b; d++)
			{
				_putchar('#');
			}
		}
	}
}
