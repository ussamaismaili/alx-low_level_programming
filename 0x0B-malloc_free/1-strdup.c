#include <stdlib.h>
/**
 * _strdup - function copy the string from stack to heeap
 *
 * @str: string
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i;
	char *ptr;

	i = 0;
	if (!str)
	{
		return (NULL);
	}
	while (str[i])
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
