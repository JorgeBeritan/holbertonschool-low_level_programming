#include "main.h"
/**
  * _abs - entry point
  * @c: value
  *
  * Return: always 0
  */
int _abs(int c)
{
	if (c < 0)
	{
		int abc = c * -1;

		return (abc);
	}
	return (c);
}
