#include <stdio.h>
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
		h = h->next;
		printf("%d", h->n)
		count++
	}
	return (count);
}
