#include "function_pointers.h"

/**
 * array_iterator - Executes the function given as a
 *                  parameter on each element of an array.
 * @array: The given Array.
 * @size: The size of the array.
 * @action: the pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
