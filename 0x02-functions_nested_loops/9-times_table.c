#include "main.h"
/**
 * times_table - prints the 9 times table
 * Description: prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int row, column, prd, tens, ones;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			prd = row * column;
			tens = prd / 10;
			ones = prd % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (prd < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
