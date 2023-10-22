#include "main.h"
/**
 * print_numbers - function frints numbers
 */

void print_numbers(void)
{
	int nr;

	for (nr = 0; nr <= 9; nr++)
	{
		_putchar(nr + '0');
	}
	_putchar('\n');
}
