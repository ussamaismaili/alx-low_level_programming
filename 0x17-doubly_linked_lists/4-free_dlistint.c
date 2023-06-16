#include "lists.h"

/**
 *free_dlistint - free a DLL
 *@head: head node
 *
 *Return: Void
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

if (head == NULL)
return;
while (head)
{
temp = head;
head = head->next;
free(temp);
}
head = NULL;
}
