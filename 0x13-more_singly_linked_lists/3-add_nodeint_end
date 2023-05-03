#include "lists.h"
/**
 * add_nodeint_end - function that adds at the end in node.
 * @head: the node.
 * @n: the element.
 * Return: a struct listint_t.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *rem;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (!*head)
		*head = ptr;
	else
	{
		rem = *head;
		while (rem->next)
			rem = rem->next;
		rem->next = ptr;
	}
	return (ptr);
}
