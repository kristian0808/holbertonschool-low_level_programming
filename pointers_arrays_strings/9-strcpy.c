#include "main.h"
/**
 * _strcpy - main
 * @dest: is int
 * @src: ok
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
