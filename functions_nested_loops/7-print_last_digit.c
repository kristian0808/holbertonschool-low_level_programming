#include "main.h"

/**
 *print_last_digit - checks
 *@n: the integer to check
 *Return: 'n'
 */


int print_last_digit(int n)

{
	n = n % 10;

	if (n < 0)
	{
		n = -n;
		_putchar (n + '0');
		return (n);
	}
	else
	{
		_putchar (n + '0');
		return (n);
	}
}
