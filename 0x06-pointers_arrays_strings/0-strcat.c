#include "main.h"
/**
 * _strcat - uhgrjehg dfgrdrg dfcdd
 * @dest:khkshfr rrrr
 * @src: fsrfrsf sfasef fs
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
	{	i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
