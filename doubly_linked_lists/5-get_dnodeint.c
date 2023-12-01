#include "lists.h"
/**
 *get_dnodeint_at_index - returns node at nth place
 *@head: pinter at the first node
 *@index: index of nodes
 *Return: Head
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
