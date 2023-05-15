#include "main.h"
/**
 * _right_pbin_mask - a recursion function to print bit 0 (acts as a mask).
 * @n: the type const unsigned long int.
 */
void _right_pbin_mask(unsigned long int n)
{
	if (n == 0)
		return;
	_right_pbin_mask(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - A function that prints the binary representation of a number.
 * @n: the type const unsigned long int.
 * Return: the binary number.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		_right_pbin_mask(n);
}
