#include "lists.h"
/**
 * sum_listint - function add the sum of elements in one nodes.
 * @head: the input.
 * Return: an int.
 */
int sum_listint(listint_t *head)
{
	int n;

	n = 0;
	if (head)
	{
		while (head)
		{
			n += head->n;
			head = head->next;
		}
	}
	return (n);
}
