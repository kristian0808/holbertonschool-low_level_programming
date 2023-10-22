#include "main.h"
/**
 * print_most_numbers - function prints numbers
 */

void print_most_numbers(void)
{
	int nr;

	for (nr = 0; nr <= 9; nr++)
	{
		if (nr != 2 && nr != 4)
		{
			_putchar(nr + '0');
		}
	}
	_putchar('\n');
}
