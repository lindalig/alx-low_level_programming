#include <unistd.h>

/**
 * _putchar - wriyes character c to stdout
 * @c: character to be printed
 * return: 1 (success)
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
