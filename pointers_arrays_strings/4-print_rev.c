#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print a string in reverse
 * @s: A pointer to a string (a character array)
 */
void print_rev(char *s)
{
	int i;

	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
