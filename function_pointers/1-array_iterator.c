#include "function_pointers.h"
/**
 * array_iterator - Iterates array
 * @action: func pointer
 * @array: array
 * @size: sizeofarr
 */

void array_iterator(int *array, size_t size, void (*action) (int))
{
	size_t i;
	if (array != NULL || action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
