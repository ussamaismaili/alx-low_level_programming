#include "lists.h"
/**
 * free_listint2 - free all this list.
 * @head: the list.
 * Return: always void.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *tr;

	if (head)
	{
		tr = *head;
		while (tr->next)
		{
			ptr = tr;
			free(ptr);
			tr = tr->next;
		}
		free(tr);
		*head = NULL;
	}
}
