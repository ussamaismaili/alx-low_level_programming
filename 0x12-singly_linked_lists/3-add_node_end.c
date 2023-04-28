#include "lists.h"
#include<stdlib.h>
#include<string.h>
/**
 * add_node_end - function
 * @head: gyyinput
 * @str: input*
 * Return: type  ofstruct
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nodes;
	list_t *new;

	if (!str)
		return (NULL);
	nodes = malloc(sizeof(list_t));
	if (!nodes)
		return (NULL);
	nodes->str = strdup(str);
	if (nodes->str == NULL)
	{
		free(nodes);
		return (NULL);
	}
	nodes->len = strlen(str);
	nodes->next = NULL;
	if (!*head)
		*head = nodes;
	else
	{
		new = *head;
		while (new->next)
			new = new->next;
		new->next = nodes;
	}
	return (nodes);
}
