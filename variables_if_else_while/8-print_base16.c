#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar(a + '0');
	for (a = 0; a <= 5; a++)
		putchar(a + 'a');

	putchar('\n');
	return (0);
}
