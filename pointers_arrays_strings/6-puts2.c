#include "main.h"

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a + 1] != '\0');
		a++;
	}
	_putchar('\n');
}
