#include "lists.h"
/**
 * add_nodeint - the function that adsd a node.
 * @head: the typedefff.
 * @n: the element.
 * Return: the struct typedef.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
