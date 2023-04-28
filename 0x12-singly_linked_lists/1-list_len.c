#include "lists.h"
/**
 * list_len - it returns the number of elements in  the linked list .
 * @h: the instance of a struct.
 * Return: the number of elements exs.
 */
size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
