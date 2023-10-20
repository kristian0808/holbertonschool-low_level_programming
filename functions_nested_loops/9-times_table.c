#include "main.h"

/**
 *times_table - checks
 *@i, j, p : the integer to check
 *Return: 'p'
 */

void times_table(void)
{
	int i, j, p;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			p = i * j;
			if (p >= 10)
			{
				_putchar (',');
				_putchar (' ');
				_putchar (p / 10 + '0');
				_putchar (p % 10 + '0');
			}
			else
			{
				if (j == 0)
				{
					_putchar (p + '0');
				}
				else
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
					_putchar (p + '0');
				}
			}
		}
		_putchar('\n');
	}
}
