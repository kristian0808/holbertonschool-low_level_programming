#include <stdlib.h>
#include <stdio.h>

/**
 *malloc_checked - ss
 *@b: s
 *Return: hgh
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
