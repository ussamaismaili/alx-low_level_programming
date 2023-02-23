#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - counts to 98
 * @n: the goven number
 * Return: the count
 */
void print_to_98(int n)
{
	if (n < 98 || n < 0)
	{
	for (; n <= 98; n++)
		printf("%4d, ", n);
	}
	else if (n == 98)
	{ printf("%4d, ", n);
	}
	else
	{
	for (; n >= 98; n--)
		printf("%4d, ", n);
	}
}
