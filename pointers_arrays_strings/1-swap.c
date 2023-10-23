#include "main.h"
/**
 * swap_int - swaps 2 integers value
 * @a: Integer
 * @b: Integer
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;

	*a = *b;

	*b = tmp;
}
