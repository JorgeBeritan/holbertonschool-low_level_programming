#include "main.h"

/**
 * _strlen - Entry point
 * @s: pointer value
 *
 * Return: C
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
