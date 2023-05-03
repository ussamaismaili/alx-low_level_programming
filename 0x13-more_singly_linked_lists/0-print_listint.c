#include "lists.h"
#include<stdio.h>
/**
 * print_listint - function
 * @h: typedef of struct
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t num;

	num = 0;
	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
