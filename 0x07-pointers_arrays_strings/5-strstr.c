#include "main.h"
/**
 * _strstr - function search the needle in the haystack
 *
 * @haystack: first string
 * @needle: second string
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int f;

	i = 0;
	f = 0;
	while (needle[f])
		f++;
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j] && needle[j] && haystack[i + j])
		{
			j++;
		}
		if (j == f)
			return (haystack + i);
		i++;
	}
	return ('\0');
}
