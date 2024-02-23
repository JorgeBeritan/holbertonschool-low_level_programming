#include "main.h"

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	*str = '\0';
	_putchar('\n');
}
