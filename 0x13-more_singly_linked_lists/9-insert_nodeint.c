#include "lists.h"
/**
 * insert_nodeint_at_index - function
 * @head: the input.
 * @idx: the index input.
 * @n: a number.
 * Return: function return struct
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *mv;
	unsigned int i;

	i = 0;
	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	mv = *head;
	if (idx != 0)
	{
		while (mv && i < (idx - 1))
		{
			i++;
			mv = mv->next;
		}
		if (mv == NULL)
			return (NULL);
	}
	ptr->n = n;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}
	else if (mv->next)
	{
		ptr->next = mv->next;
		mv->next = ptr;
	}
	else
	{
		ptr->next = NULL;
		mv->next = ptr;
	}
	return (ptr);
}
