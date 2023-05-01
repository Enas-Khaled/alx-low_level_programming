#include "lists.h"
/**
 * insert_nodeint_at_index - insert node
 * @idx: index
 * @n: value
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new, *temp;

	if (head == NULL)
		return (NULL);
	
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (*head != NULL)
	{
		if (count == idx)
		{
			temp = *head;
			*head = new;
			(*head)->next = temp;
			return (*head);
		}
		count++;
		*head = (*head)->next;
	}
	return (NULL);
}
