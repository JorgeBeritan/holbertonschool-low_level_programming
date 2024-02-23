#include "main.h"

void
rev_string(char *s)
{
	char c;
	int a = 0;
	int	b = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	while (b < a)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		b++;
		a--;
	}
}
