#include "main.h"

/**
 * print_last_digit - print the last digits
 * @n: the given number.
 * Return: modulo 10 of the number
 */
int print_last_digit(int n)
{	int x;

	x = n % 10;
	if (n < 0)
	{	n = -n;
		_putchar(x + '0');
	}
	return (x);
}


