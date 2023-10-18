#include "main.h"

/**
 *print_sign - checks
 *@n: the integer to check
 *Return: 1 if n greater than zero, 0 if equal, -1 if less than zero
 */


int print_sign(int n)

{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
