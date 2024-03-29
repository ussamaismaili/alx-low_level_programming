#include "lists.h"
#include<stdlib.h>
#include<string.h>
/**
 * add_node - add the new node at the very beginning
 * @head: the head of the list.
 * @str: the string data of the list we want to add .
 * Return: the address of the new element, otherwise NULL if fails .
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(newEl);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}

/**
 * _strlen - It calculate the length of a const char string.
 * @s: the string we want
 * Return: the length of string.
 */

int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
