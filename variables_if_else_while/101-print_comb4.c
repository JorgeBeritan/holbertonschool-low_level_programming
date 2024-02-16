#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int n, i, k;

	for (n = '0'; n <= '9'; n++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (n < i && i < k)
					putchar(n);
					putchar(i);
					putchar(k);

					if (n != '7')
						putchar(',');
						putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
