#include "main.h"
/**
 * _isdigit - function check if the input is a number
 *
 * @c: input
 *
 * Return: Always return 0 or 1.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
