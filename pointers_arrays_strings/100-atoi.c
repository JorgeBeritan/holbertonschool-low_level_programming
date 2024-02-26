#include "main.h"

int _atoi(char *s)
{
	int j = 0;
	int sign = 1;
	int i = 0;

	while(s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		sign = 1;
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			j = j * 10 + (s[i] - '0');
		}
		i++;
	}

	return (sign * j);
}