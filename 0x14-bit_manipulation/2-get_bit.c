#include "main.h"
/**
 * get_bit -a function that return the value of a bit in a given index.
 * @n: the type unsigned long int input.
 * @index: the type unsigned int position of unit.
 * Return: all the value of a bit in an index or -1 if occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
