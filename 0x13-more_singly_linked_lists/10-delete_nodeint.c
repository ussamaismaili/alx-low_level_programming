#include "lists.h"
/**
 * reverse_listint - function revers nodes.
 * @head: the input.
 * Return: the head.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (NULL);
	ptr = *head;
	if (!ptr->next)
		return (ptr);
	tmp = NULL;
	while (*head)
	{
		ptr = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = ptr;
	}
	*head = tmp;
	return (*head);
}
