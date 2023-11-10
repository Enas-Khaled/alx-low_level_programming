#include "lists.h"

/**
 * get_dnodeint_at_index - (dlistint_t *head, unsigned int index)
 * @head: ptr to head
 * @index: index
 * Return: the nth node of a dlistint_t linked list or NULL
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int counter = 0;

	while (temp)
	{
		if (counter == index)
			return (temp);
		temp = temp->next;
		counter += 1;
	}
	return (NULL);
}
