#include <unistd.h>

/**
 * _putchar - writes the caracter c to stdout
 * @c : the caracter to print
 *
 * Return: On success 1.
 * On erro, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
