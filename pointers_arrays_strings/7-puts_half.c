#include "main.h"
/**
 * puts_half - main
 * @str: is int
 *
 */
void puts_half(char *str)
{
	int len = 0;
	int start;
	int i;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
