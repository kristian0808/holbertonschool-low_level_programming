#include "main.h"
/**
 * print_square - function
 * @i,j parameters for rows and colums
 *
 *
 * Return: 0 if size <= 0 else prints character # respectively if comletes the condition
 */

void print_square(int size)
{
	
	if (size <= 0)
		{
			_putchar('\n');
		}
	else
		{
			int i,j;

			for ( i = 0; i < size; i++)
			{
				for (j = 0; j < size; j++)
				{
					_putchar('#');
				}
			_putchar('\n');
			}
		}
}


