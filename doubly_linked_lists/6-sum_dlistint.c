#include "lists.h"
/**
 *sum_dlistint - func
 *@head: pointer
 *Return: Sum
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

