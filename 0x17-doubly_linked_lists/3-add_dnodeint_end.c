#include "lists.h"
/**
 * *add_dnodeint_end - (dlistint_t **head, const int n)
 * @n: data
 * @head: ptr to head
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (!head || !new)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		new->prev = temp;
		temp->next = new;
	}
	return (new);
}
