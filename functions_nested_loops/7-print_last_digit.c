#include "main.h"

/**
 *print_last_digit - checks
 *@n: the integer to check
 *Return: 'n'
 */


int print_last_digit(int n)

{
	n = n % 10;

	if (n > 0)
	{
		_putchar (n + '0');
		return (n);
	}
	else if (n == 0)
	{
		_putchar (n + '0');
		return (0);
	}
	else
	{
		_putchar (n + '0');
		return (-1 * n);
	}
}
