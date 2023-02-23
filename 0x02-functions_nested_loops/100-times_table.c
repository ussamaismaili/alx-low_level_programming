#include "main.h"
#include<unistd.h>

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: the input give them
 *
 * Return: Alwas return void
 */

void print_times_table(int n)
{
	int i, j, e, save;

	i = 0;
	if ((n > 15) || (n < 0))
		return;
	for (i = 0; i <= n; i++)
	{
		j = 0;
		_putchar(48);
		for (e = 0; e < n; e++)
		{
			j += i;
			save = j / 10;
			if (j <= 9)
			{
				write(1, ",   ", 4);
				_putchar(j + 48);
			}
			else if (j < 100 && j > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(j / 10 + 48);
				_putchar(j % 10 + 48);
			}
			else if (j >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(j / 100 + 48);
				_putchar(save % 10 + 48);
				_putchar(j % 10  + 48);
			}
		}
		_putchar('\n');
	}
}
