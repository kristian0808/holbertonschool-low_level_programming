#include <stdlib.h>
#include "lists.h"
/**
 *add_dnodeint - add new node at the beginning of a list
 *@head: pointer to the first node
 *@n: value stored in nodes
 *Return: New node added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	new->prev = NULL;

	return (new);
}

