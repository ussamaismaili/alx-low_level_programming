#include "lists.h"
#include <stdio.h>
/**
 * print_list - print all elements of a struct list given .
 * @h: the struct .
 * Return: all numbers of nodes .
 */
size_t print_list(const list_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
