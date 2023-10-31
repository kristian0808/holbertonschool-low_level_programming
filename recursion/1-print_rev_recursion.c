#include "main.h"
/**
 * _print_rev_recursion - Prints a string followed by a new line using
 * @s: String to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
