#include "function_pointers.h"
/**
 * print_name - function rempleace the input name the pointer to function
 * f
 * @f: pointer to function
 * @name: input to reampleace to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
