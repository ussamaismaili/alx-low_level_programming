#include "lists.h"
#include<stdlib.h>
/**
 * free_list - a function to free nodes.
 * @head: the input.
 * Return: always void.
 */
void free_list(list_t *head)
{
	list_t *Mptr;

	while (head)
	{
		Mptr = head;
		head = head->next;
		free(Mptr->str);
		free(Mptr);
	}
}
