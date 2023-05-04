#include "lists.h"
/**
 * get_nodeint_at_index - a function.
 * @head: a struct typedef .
 * @index: the index.
 * Return: the listint_t.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	i = 0;
	if (!head)
		return (NULL);
	ptr = head;
	while (ptr && i < index)
	{
		i++;
		ptr = ptr->next;
	}
	head = ptr;
	return (ptr);
}
