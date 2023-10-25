#include "main.h"
/**
 * _strcmp - Main
 * @s1: a
 * @s2: a
 * Return: diff
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	int diff = 0;

	while (s1[i] != s2[i])
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (diff);
}
