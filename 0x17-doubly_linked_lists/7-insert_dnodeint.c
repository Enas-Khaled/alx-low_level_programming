#include "lists.h"
/**
 * *insert_dnodeint_at_index - (dlistint_t **h, unsigned int idx, int n)
 * @h: ptr to head
 * @idx: index to new node
 * @n: data to add
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	unsigned int count = 0;

	if (!h || !new || !n)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp)
	{
		count += 1;
		temp = temp->next;
	}
	if (idx > count)
	{
		free(new);
		return (NULL);
	}
	temp = *h;
	while (temp)
	{
		if (count == idx - 1)
		{
			new->n = n;
			new->next = temp->next;
			new->prev = temp;
			if (temp->next)
				temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		count += 1;
		temp = temp->next;
	}
	free(new);
	return (add_dnodeint_end(h, n));

}
