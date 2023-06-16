#include "lists.h"

/**
 *add_dnodeint_end - add node at end of DLL
 *@head: head node
 *@n: new data
 *
 *Return: new node adress on success, NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *temp;

temp = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
while (temp->next)
temp = temp->next;
temp->next = new;
new->prev = temp;
return (new);
}
