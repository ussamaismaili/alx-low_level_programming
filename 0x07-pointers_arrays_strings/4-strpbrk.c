#include "main.h"
/**
 * _strpbrk - return the first match char
 *
 * @s: first input
 *
 * @accept: second input
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (0);
}
