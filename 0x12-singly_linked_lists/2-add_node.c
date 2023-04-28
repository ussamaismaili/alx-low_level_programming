#include "lists.h"
#include<stdlib.h>
#include<string.h>
/**
 * add_node - function stock in a array of struct
 *
 * @head: array of struct
 * @str: element of struct
 *
 * Return: structur
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nodes;

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
	nodes->next = *head;
	*head = nodes;

	return (nodes);
}
