#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string to append.
 * Return: A pointer to the resulting string (dest)
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (src[j] != '\0')
	{
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
