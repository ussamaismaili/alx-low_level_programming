#include "main.h"
/**
 * _puts_recursion - print string with recusion
 *
 * @s: string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_puts_recursion(s + i);
}
