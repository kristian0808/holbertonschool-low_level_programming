#include "main.h"
/**
 *  rev_string - hej
 *  @s: hej
 */

void rev_string(char *s)
{
	int len = 0;

	int start, end;

	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}
	start = 0;

	end = len - 1;

	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}


