#include "main.h"

void print_triangle(int size)
{
	int b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (c = 0; c < size; c++)
		{
			_putchar('\n');
			_putchar('#');
			for (b = 0; b < c; b++)
			{
				_putchar('#');
			}
		}
	}
}
