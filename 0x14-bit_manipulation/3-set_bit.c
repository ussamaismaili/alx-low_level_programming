#include "main.h"
/**
 * set_bit - it sets the value of a bit to 1 at a given index.
 * @n: the type unsigned long int input pointer.
 * @index: a type unsigned int position of unit.
 * Return: a 1 if works -1 if not.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1 << index;
	return (1);
}
