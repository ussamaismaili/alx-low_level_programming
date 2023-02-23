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
		{printf("%d, ", n);
		}printf("\n");
	}
	else  if (n == 98)
	{
		printf("%d, ", n);
		printf("\n");
		}
	else
	{
	for (; n >= 98; n--)
		printf("%d", n);
	}
	printf("\n");
}
