#include "main.h"
/**
 * get_endianness - A function that checks the endianness.
 * Return: a 0 if big endian, a 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
