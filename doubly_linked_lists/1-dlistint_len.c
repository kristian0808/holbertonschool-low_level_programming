#include "lists.h"
/**
 *dlistint_len - finds the length of a list
 *@h: Pointer to the first node
 *Return: Count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
