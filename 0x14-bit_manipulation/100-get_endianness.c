#include "main.h"

/**
 * get_endiannness - checks either big or little endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
