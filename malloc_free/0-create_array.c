#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create an array of char and initializes it with a specific character.
 * @size: The size of the array to create
 * @c: The character to initialize the array with.
 * Return: If size is 0 or if memory allocation fails, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	
	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
