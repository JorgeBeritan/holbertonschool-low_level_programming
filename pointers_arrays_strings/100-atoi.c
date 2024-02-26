#include "main.h"

int _atoi(char *s)
{
	int i = 0, j = 0, sign = 1;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}

	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		j = j * 10 + (s[i] - '0');
		i++;
	}
	return (sign * j);
}
