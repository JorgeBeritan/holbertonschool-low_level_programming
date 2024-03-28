#include "main.h"

void print_binary(unsigned long int n)
{
	unsigned long int k;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (k = n, i = 0; (k >>= 1) > 0; i++)
		;
	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
