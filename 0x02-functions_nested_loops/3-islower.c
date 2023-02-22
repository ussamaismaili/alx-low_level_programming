#include "main.h"
/**
 * _islower- checks for weather is c lowercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 * Return _islower : (1) if true and (0) if false
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
