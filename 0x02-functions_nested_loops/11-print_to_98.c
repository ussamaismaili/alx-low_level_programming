#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all numbers from n to 98
 *
 * @n: input give them
 *
 * Return: always return nothing
 */
void print_to_98(int n)
{
	if (n == 98)
		printf("%d\n", n);
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
}
