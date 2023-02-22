#include "main.h"
/**
* print_alphabet_x10 - function that print alphabets in lower case
* Return: ofc (0)
*/
void print_alphabet_x10(void)
{
	char j;

	while (j < 10)
	{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
	j++;
	}
}
