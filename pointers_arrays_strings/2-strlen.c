/**
 *_strlen - Calculate the length of a string
 *@s: A pointer to a string (a character array)
 *
 *Return: The length of the string
 */
#include "main.h"

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
