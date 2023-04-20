#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print A name using pointer to function
 * @name: A string to add
 * @f: pointer to function
 * Return: VOID
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
