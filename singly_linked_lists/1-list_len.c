#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in linked list
 * @h : pointer to the header of a linked list
 * Return: count of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
