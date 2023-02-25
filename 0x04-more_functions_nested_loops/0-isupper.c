#include "main.h"
/**
 * _isupper - function check if the char is uppercase
 *
 * @c: the input
 *
 * Return: alwas _isupper  return 1 or 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
