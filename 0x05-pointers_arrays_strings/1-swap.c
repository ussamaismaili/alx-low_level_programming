#include "main.h"
/**
 * swap_int - swap two numbers
 * @a: first int
 * @b: secound inputs
 * return:void
 */
void swap_int(int *a, int *b)
{
	int x;
	x = *a;
	*a = *b;
	*b = x;
}
