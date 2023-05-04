#include "lists.h"
/**
 * pop_listint - a function to remove a node.
 * @head: the input.
 * Return: an int.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;
	listint_t *vr;

	n = 0;
	if (*head)
	{
		ptr = *head;
		n = ptr->n;
		vr = ptr;
		ptr = ptr->next;
		free(vr);
		*head = ptr;
		return (n);
	}
	return (0);
}
