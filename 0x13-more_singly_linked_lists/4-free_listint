#include "lists.h"
/**
 * free_listint - a function free the that was used by memory by nodes.
 * @head: the node.
 * Return: always void.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head)
	{
		while (head->next)
		{
			ptr = head;
			free(ptr);
			head = head->next;
		}
		free(head);
	}
}
