#include <stddef.h>
/**
 * _strpbrk - functions to search a char in str
 * @s: pointer to string
 * @accept: character to compare
 * Return: point to nth char
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}
	return (NULL);
}
