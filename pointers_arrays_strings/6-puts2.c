#include "main.h"

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a + 1] != '\0')
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
