#include "main.h"

/**
 * swap_int - Entry point
 * @a: First Point
 * @b: Second Point
 *
 * Return:
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
