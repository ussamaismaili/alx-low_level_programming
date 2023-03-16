#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initialize it with a char
 *
 * @size: size of array
 * @c: char for initialize
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (0);
	ptr = malloc(sizeof(char) * (size));
	if (!ptr)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
