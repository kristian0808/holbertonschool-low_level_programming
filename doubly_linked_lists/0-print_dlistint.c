#include <stdio.h>
#include "lists.h"
/**
 *print_dlistint - print all list elements
 *@h: Pointer to the first node
 *Return: count of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
