#include "lists.h"
/**
 * listint_len - function print the number of all nodes.
 * @h: the head.
 * Return: size_t.
 */
size_t listint_len(const listint_t *h)
{
	size_t num;

	num = 0;
	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
