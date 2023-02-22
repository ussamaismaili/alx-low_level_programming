#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 * Description: prints the last digit of a number
 * Return: integer
 */

int print_last_digit(int n)
{
	int last_n = n % 10;

	if (n < 0)
	{
		last_n = last_n * -1;
	}
	_putchar(last_n + '0');
	return (last_n);
}
