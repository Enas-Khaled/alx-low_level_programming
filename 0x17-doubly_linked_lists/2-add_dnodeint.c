#include "lists.h"
/**
 * *add_dnodeint - (dlistint_t **head, const int n);
 * @n: data
 * @head: ptr to head
 * Return:  the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (new ? free(new), NULL : NULL);

	new->prev = NULL;
	new->n = n;
	if (!*head)
	{
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
