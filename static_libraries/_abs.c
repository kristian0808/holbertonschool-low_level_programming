#include "main.h"

/**
 *_abs - checks
 *@n: the integer to check
 *Return: 1 if n greater than zero, 0 if equal, 1 if less than zero
 */


int _abs(int n)

{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1 * n);
	}
}
